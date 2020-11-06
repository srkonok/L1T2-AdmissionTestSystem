#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int i,j,n,p;

struct student_info
{
    char name[100];
    int ssc_roll;
    int ssc_year;
    char ssc_board[20];
    float ssc_gpa;
    int hsc_roll;
    int hsc_year;
    char hsc_board[20];
    float hsc_gpa;
    float hsc_phy;
    float hsc_chem;
    float hsc_math;
    int serial;
    float total_mark;
};

pass_cand()
{
    char pass[6];   /*..5 char for password & 1 for '\0'..*/
    printf("Welcome!!!!\n\n");
    printf("Examination Controller Section :\n");
    printf("(Must be filled by Exam Controller.)\n\n");
    for(i=3; i>0; i--)
    {
        printf("\nEnter the pasword :");
        gets(pass);
        system("cls");
        if(strcmp(pass,"baust")==0)
        {
            printf("Welcome Again!\n");
            printf("Enter How Many Candidates are going to sit for Exam: ");
            scanf("%d", &n);
            printf("\nSeats Available : ");
            scanf("%d", &p);
            system("cls");
            break;
        }
        else
        {
            if(i==1)
            {
                printf("\aProgram Paused. Restart the program and enter correct password.\n");
                printf("Thank You!\n\n");
                exit(0);
            }
            else
            {
                printf("\aInvalid Password. %d trials remaining!",i-1);
            }
        }
    }
}

data_entry()
{

    FILE *fp;
    if(fp=='NULL')
        printf("File Operation Failed!!");
    struct student_info var[n];
    fp=fopen("stddata.txt","w");
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        var[i].serial=i+1;
        fprintf(fp,"Student_Serial_No:%d\t",i+1);

        printf("Info of student %d\n", i+1);
        printf("Fill up the following fields :\n");
        printf("Enter the name : ");
        scanf("%[^\n]",var[i].name);
        fprintf(fp,"*Name:%s\t",var[i].name);

        printf("Enter the SSC roll : ");
        scanf("%d",&var[i].ssc_roll);
        fprintf(fp,"*SSC_Roll:%d\t",var[i].ssc_roll);

        printf("Enter the SSC year : ");
        scanf("%d",&var[i].ssc_year);
        fprintf(fp,"*SSC_Year:%d\t",var[i].ssc_year);
        fflush(stdin);

        printf("Enter the SSC board : ");
        scanf("%s",var[i].ssc_board);
        fprintf(fp,"*SSC_Board:%s\t",var[i].ssc_board);
        fflush(stdin);

        printf("Enter the SSC GPA : ");
        scanf("%f",&var[i].ssc_gpa);
        fprintf(fp,"*SSC_GPA:%f\t",var[i].ssc_gpa);

        printf("Enter the HSC roll : ");
        scanf("%d",&var[i].hsc_roll);
        fprintf(fp,"*HSC_Roll:%d\t",var[i].hsc_roll);

        printf("Enter the HSC year : ");
        scanf("%d",&var[i].hsc_year);
        fprintf(fp,"*HSC_Year:%d\t",var[i].hsc_year);
        fflush(stdin);

        printf("Enter the HSC board : ");
        scanf("%s",var[i].hsc_board);
        fprintf(fp,"*HSC_Board:%s\t",var[i].hsc_board);
        fflush(stdin);

        printf("Enter the HSC GPA : ");
        scanf("%f",&var[i].hsc_gpa);
        fprintf(fp,"*HSC_GPA:%f\t",var[i].hsc_gpa);

        printf("Enter the Total Number of Physics 1st and 2nd Paper : ");
        scanf("%f",&var[i].hsc_phy);
        fprintf(fp,"*HSC_PHY:%f\t",var[i].hsc_phy);

        printf("Enter the Total Number of Chemistry 1st and 2nd Paper : ");
        scanf("%f",&var[i].hsc_chem);
        fprintf(fp,"*HSC_CHEM:%f\t",var[i].hsc_chem);

        printf("Enter the Total Number of Mathematics 1st and 2nd Paper : ");
        scanf("%f",&var[i].hsc_math);
        fprintf(fp,"*HSC_MATH:%f\t",var[i].hsc_math);

        system("cls");


        if((var[i].ssc_gpa + var[i].hsc_gpa)>=8 && (var[i].ssc_gpa + var[i].hsc_gpa)<=10)
        {
            printf("Your Total GPA of SSC & HSC is : %f\n",var[i].ssc_gpa + var[i].hsc_gpa);
            printf("So, You are Eligible for the test!\n");
            //printf("\n(Press any key to continue)");
            //getch();

            ///Question:
            printf("\nGenerating Question:\n\n");
            system("pause");
            system("cls");


            char x;
            float countr=0;


            printf("Choose any Options : A/B/C/D\n");

            //Q-1
            printf("\nQ-1\nWhat is the national fruit of BD?");
            printf("\nA.Mango\nB.Jack-fruit\nC.Pineapple\nD.Litchi");
            if (toupper(getch())=='B')
            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr = countr-0.5;
            }

            //Q-2
            printf("Q-2\nWhat is the capital of Bangladesh?");
            printf("\nA.Dhaka\nB.Chattagram\nC.Sylhet\nD.Khulna");
            if (toupper(getch())=='A')
            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-3
            printf("Q-3\nWhat is the national animal of bangladesh?");
            printf("\nA.Lion\nB.Tiger\nC.Goat\nD.Cow");
            if (toupper(getch())=='B')
            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-4
            printf("Q-4\n Where is our national monument?");
            printf("\nA.Ashulia\nB.Fulbari\nC.Savar\nD.Uttara");
            if (toupper(getch())=='C')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-5
            printf("Q-5\n When was Bangladesh independent from Pakistan?");
            printf("\nA.1952\nB.1967\nC.1969\nD.1971");

            if (toupper(getch())=='D')
            {
                system("cls");
                countr++;
            }

            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-6
            printf("Q-6\nLight year is the unit of?");
            printf("\nA.Speed\nB.Distance\nC.Frequency\nD.Vibration");
            if (toupper(getch())=='B')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-7
            printf("Q-7\nWho is the inventor of alternating current?");
            printf("\nA.Graham Bell\nB.Thomas Alva Edison\nC.Nikola Tesla\nD.Sergio Ramos");
            if (toupper(getch())=='C')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-8
            printf("Q-8\nWho is the designer of our national flag?");
            printf("\nA.Kamrul Hasan\nB.KM Sefatullah\nC.Ahsan Habib\nD.Samsujjaman ");
            if (toupper(getch())=='A')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-9
            printf("Q-9\nWho is called The God of Cricket?");
            printf("\nA.Kumar Sangakara\nB.Sachin Tendulkar\nC.Ricky Ponting\nD.Sir Donald Bradman");
            if (toupper(getch())=='B')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-10
            printf("Q-10\nWhat is the greatest invention of Newton ?");
            printf("\nA.Light\nB.Time Machine\nC.Gravitation\nD.Dynamite");
            if (toupper(getch())=='C')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-11
            printf("Q-11\nWho was the former secretary general of United Nations?");
            printf("\nA.Barak Obama\nB.George W Bush\nC.Kofi Anan\nD.Lee Jong Suk");
            if (toupper(getch())=='C')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-12
            printf("Q-12\nWho is the Winner of FIFA world cup 2018?");
            printf("\nA.Senegal\nB.Niger\nC.Peru\nD.None");
            if (toupper(getch())=='C')

            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-13
            printf("Q-13\nWhich one is not a constituent of cement-clinker?");
            printf("\nA.Calcium Silicate\nB.Calcium Aluminate\nC.Magnesium Oxide\nD.Sodium Oxide");
            if (toupper(getch())=='D')


            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-14
            printf("Q-14\nWhat is the value of 'g' as gravitational acceleration?");
            printf("\nA.9.8\nB.9.1\nC.8.89\nD.7.89");
            if (toupper(getch())=='A')
            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }

            //Q-15
            printf("Q-15\nWho is the number one all-rounder of cricket?");
            printf("\nA.Shane Watson\nB.Shakib Al Hasan\nC.Glen Maxwell\nD.Kane Williamson");
            if (toupper(getch())=='B')
            {
                system("cls");
                countr++;
            }
            else
            {
                system("cls");
                countr=countr-0.5;
            }
            system("cls");

            var[i].total_mark=((var[i].hsc_math+var[i].hsc_chem+var[i].hsc_phy)*10/600)+(countr*90/15);
            printf("Your mark of Test is : %f\n\n",countr);
            printf("Total mark(considering marks of PHYSICS,CHEMISTRY,MATHEMATICS of HSC) : %f\n",var[i].total_mark);
            fprintf(fp,"Obtained_Mark:%f\n",var[i].total_mark);
            //converting test mark to 90 & physics, chem, math to 10!
            system("pause");
            system("cls");


            //sorting
            if(i==n-1)
            {
                char nam[100];
                printf("Here comes the result:\n");
                for(i=0; i<n-1; i++)
                {
                    for(j=0; j<n-1-i; j++)
                        if(var[j].total_mark<var[j+1].total_mark)
                        {
                            float temp=var[j].total_mark;
                            var[j].total_mark=var[j+1].total_mark;
                            var[j+1].total_mark=temp;

                            strcpy(nam,var[j].name);
                            strcpy(var[j].name,var[j+1].name);
                            strcpy(var[j+1].name,nam);

                            int ser=var[j].serial;
                            var[j].serial=var[j+1].serial;
                            var[j+1].serial=ser;
                        }
                }
                FILE *fp2;
                if(fp=='NULL')
                    printf("File Operation Failed!!\n");
                fp2=fopen("result.txt","w");
                for(i=0; i<n; i++)
                {
                    if(var[i].total_mark!=-999)  //for ignoring the non-eligible candidates in the merit list! (notice:Line-430)
                    {
                        printf("Student Serial No. : %d\t",var[i].serial);
                        fprintf(fp2,"*Student Serial No. : %d\t",var[i].serial);
                        printf("Name : %s\t",var[i].name);
                        fprintf(fp2,"*Name : %s\t\t",var[i].name);
                        printf("*Marks : %f\n",var[i].total_mark);
                        fprintf(fp2,"*Marks : %f\n",var[i].total_mark);
                    }
                }
                fclose(fp2);
            }

        }

        else
        {
            printf("Sorry, You are not eligible!\n\n");
            var[i].total_mark=-999;
            fprintf(fp,"(Not Eligible)\n");
            system("pause");
            system("cls");

            //sorting
            if(i==n-1)
            {
                char nam[100];
                printf("Here comes the result:\n");
                for(i=0; i<n-1; i++)
                {
                    for(j=0; j<n-1-i; j++)
                        if(var[j].total_mark<var[j+1].total_mark)
                        {
                            float temp=var[j].total_mark;
                            var[j].total_mark=var[j+1].total_mark;
                            var[j+1].total_mark=temp;

                            strcpy(nam,var[j].name);
                            strcpy(var[j].name,var[j+1].name);
                            strcpy(var[j+1].name,nam);

                            int ser=var[j].serial;
                            var[j].serial=var[j+1].serial;
                            var[j+1].serial=ser;
                        }
                }
                FILE *fp2;
                if(fp=='NULL')
                    printf("File Operation Failed!!\n");
                fp2=fopen("result.txt","w");
                for(i=0; i<n; i++)
                {
                    if(var[i].total_mark!=-999)  //for ignoring the non-eligible candidates in the merit list! (notice:Line-430)
                    {
                        printf("Student Serial No. : %d\t",var[i].serial);
                        fprintf(fp2,"*Student Serial No. : %d\t",var[i].serial);
                        printf("Name : %s\t",var[i].name);
                        fprintf(fp2,"*Name : %s\t\t",var[i].name);
                        printf("*Marks : %f\n",var[i].total_mark);
                        fprintf(fp2,"*Marks : %f\n",var[i].total_mark);
                    }
                }
                fclose(fp2);
            }
        }
    }
    fclose(fp);
}


int main()
{
    pass_cand();
    data_entry();

    printf("\n\nTop %d candidates are welcomed for admission!\n\n\n",p);
    system("pause");
}




///The End!!







