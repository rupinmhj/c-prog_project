void insertEmployee()
{
    f=fopen("employee07.txt","a+");
    employee e;
    char next;
    printf("\nEnter employee's name:");
    scanf("%s",&e.name);

    printf("\nEnter employee's address:");
    scanf("%s",&e.address);
    fflush(stdin);
     printf("\nEnter employee's id:");
    scanf("%d",&e.id);
    fflush(stdin);
     printf("\nEnter employee's post:");
    scanf("%s",&e.post);
    fflush(stdin);

    printf("\nEnter employee's salary:");
    scanf("%d",&e.salary);

    fwrite(&e,sizeof(e),1,f);
    printf("Employee's data record successfully\n");
    printf("Wanna add another data??[y/n]\n");void
  next=getche();

    while(next=='y'||next=='Y')
    {
        printf("\nEnter employee's name:");
    scanf("%s",&e.name);

    printf("\nEnter employee's address:");
    scanf("%s",&e.address);

     printf("\nEnter employee's id:");
    scanf("%d",&e.id);

     printf("\nEnter employee's post:");
    scanf("%s",&e.post);

    printf("\nEnter employee's salary:");
    scanf("%d",&e.salary);
    fwrite(&e,sizeof(e),1,f);
    printf("Employee's data record successfully\n");
    printf("Wanna add another data??[y/n]\n");
    next=getche();
    }
    fclose(f);


}
