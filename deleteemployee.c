void deleteEmployee()
{
employee e;
employee e1;
char name[30];
printf("Enter employee's Name:");
scanf("%s",&name);

ft=fopen("employee07.txt","r");
fo=fopen("temp.txt","w");
if(ft==NULL){
    printf("#####Something error#####");
}else{
printf(":::::::::::::::::::::::ALL EMPLOYEE::::::::::::::::::::::\n");
while((fread(&e,sizeof(e),1,ft))==1){
    if((strcmpi(name,e.name))==0){
    printf("\nExisting Data:\n");
    printf("Name: %s",e.name);
    fflush(stdin);
    printf("\nAddress: %s",e.address);
    fflush(stdin);
    printf("\nid: %d",e.id);
    fflush(stdin);
printf("\npost: %s",e.post);
    fflush(stdin);
printf("\nSalary: %d",e.salary);


    }
}
rewind(ft);

while((fread(&e,sizeof(e),1,ft))==1){
    if((strcmpi(name,e.name))==0){
   continue;
    }else{
        fwrite(&e,sizeof(e),1,fo);
    }
}


}
fclose(ft);
fclose(fo);
remove("employee07.txt");
rename("temp.txt","employee07.txt");
printf("\n\ndata deleted successfully.");


}
