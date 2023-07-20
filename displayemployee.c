
void displayEmployee()
{
    employee e;
    ft=fopen("employee07.txt","r");
    if(ft==NULL)
    {
        printf("\n\n\tSomething error!!");
    }
    else
    {
        printf("########EMPLOYEE'S DATA########\n");
        while((fread(&e,sizeof(e),1,ft))==1)
        {
            printf("Name:%s\n",e.name);
            printf("Address:%s\n",e.address);
            printf("Id_no:%d\n",e.id);
            printf("Post:%s\n",e.post);
            printf("Salary:%d\n",e.salary);
            printf("---------------------------\n");
        }
    }
    fclose(ft);
}
