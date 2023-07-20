//updating employee's data

void updateEmployee()
{
    employee e;
    employee e1;
    char name[30];
    printf("Enter employee's name:");
    scanf("%s",&name);

    ft=fopen("employee07.txt","r");
    fo=fopen("temp.txt","w");
    if(ft==NULL)
    {
        printf("\n\nSomething error!!");

    }
    else
        {
        while((fread(&e,sizeof(e),1,ft))==1)
            {
                if((strcmp(name,e.name))==0)
                {
                    printf("\nExisting Data:\n");
                    printf("Name:%s",e.name);

                    fflush(stdin);
                    printf("Address:%s\n",e1.address);

                    fflush(stdin);
                    printf("Id_no:%d\n",e1.id);

                    fflush(stdin);
                    printf("Post:%s\n",e1.post);

                    fflush(stdin);
                    printf("Salary:%d\n",e1.salary);


                }
            }rewind(ft);
            while((fread(&e,sizeof(e),1,ft))==1)
            {
                if((strcmpi(name,e.name))==0)
                    {
                        printf("\nNew name:\n");
                        scanf("%s",&e1.name);
                        printf("New address:");
                        scanf("%s",&e1.address);
                        printf("New id:");
                        scanf("%d",&e1.id);
                        printf("New post:");
                        scanf("%s",&e1.post);
                        printf("New salary:");
                        scanf("%d",&e1.salary);
                        fwrite(&e1,sizeof(e1),1,fo);

                }
                    else{fwrite(&e,sizeof(e),1,fo);}
            }
        }
        fclose(ft);
        fclose(fo);
        remove("employee07.txt");
        rename("temp.txt","employee07.txt");
printf("Data updated successfully!!!!!!!!!!!");
}
