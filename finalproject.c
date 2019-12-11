#include<stdio.h>     //this program is designed to make an appointment in a hotpital 
#include<string.h>    //it generally separated visitors into two sections (student,which offers for them some discount)(nonstudent)   
void Welcome(void);
void Student(void);   
void Non_student(void);
void Sections(char name[50],int identity ,int age , char gender[8] , char address[20],int phone,int secret,char day[12]); //shows all the sections that the hospital offers 
void Cradiology(char name[50],int identity ,int age , char gender[8] , char address[20],int phone,int secret,char day[12]);//<-|
void receipt(char name[50],int identity,int age,char gender[8],char address[20],int phone,char doctorname[50],char doctorQ[100],int doctorprice,int doctorfrom,int doctorto,int secret);
void E_N_T(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12]);     //  |    These are the sections offered
void Eye(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12]);      //   |    each section contain varity of doctors
void Dental(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12]);   //   |
void Dermatology(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12]);// |    (names,Qualification,price,time avalible)
void Pediatric(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12]); //<-|
int main()
{
	int x;
	char status,Enter;
	
	system("title Project");
	Welcome();
	system("color 71");
	printf("\n\nAre you student(Yes,No)#:");
												//the answer of this Q will determine what section u should call(student/nonstudent)
	for(x=0;x<1;x++)
	{
		fflush(stdin);
		scanf("%c",&status);
		if(status=='Y' || status=='y' )
			{
				printf("Press 'Enter' to continue...");
				fflush(stdin);
				scanf("%c",&Enter);
				system("cls");
				Student();
				}
		else if(status=='N' || status=='n' )
			{
				printf("Press 'Enter' to continue...");
				fflush(stdin);
				scanf("%c",&Enter);
				system("cls");
				Non_student();
				}

		else
		{
			printf("Invalid input,please try again\n");
			x--;
			continue;
		}
	}

}
void Welcome(void)
{
	printf("\n\n\n");
	printf("\t\tWW                     WW     II                                                  \n");
	printf("\t\t WW                   WW      II                                                  \n");
	printf("\t\t  WW                 WW       II                                                  \n");
	printf("\t\t   WW               WW        II      CCCCCC    OOOOOO      mm mm  mm      eeeeee \n");
	printf("\t\t    WW      WW     WW         II     CC        OO    OO     mm   mm  mm   ee    ee\n");
	printf("\t\t     WW   WW  WW  WW          II     CC        OO    OO     mm   mm  mm   ee eeeee\n");
	printf("\t\t      WWWW     WWWW           II     CC        OO    OO     mm   mm  mm   ee      \n");
	printf("\t\t       WW       WW            II      CCCCCC    OOOOOO      mm   mm  mm    eeeeee \n\n");
	system("color 07");
	printf("\t\t                                  to  IIUM Hospital                                 \n\n\n");
}
void Student(void)
{
	char name[50],address[20],gender[8],day[12];	
	int identity,age,phone,secret=1;//"secret" to determine where these information come from ,because at the end ,student section only will		
											// get some discounted price. 
	system("color 3f");							//this function only will be displayed to student visitors
	printf("Personal Information\n");			//and here are some information they should fill in 
	printf("---------------------\n");			//based on these details the receipt will be displayed		
	printf("Enter your name : ");
	gets(name);
	printf("Enter your matric card no : ");
	scanf("%d",&identity);
	printf("what is your age : ");
	scanf("%d",&age);
	printf("What is your sex : ");
	scanf("%s",gender);
	printf("Where is your address : ");
	fflush(stdin);   
	gets(address);   
	printf("What is your phone number :");
	scanf("%d",&phone);
	printf("Enter the day that you wish to make the appointment on : ");
	scanf("%s",day);
	system("cls"); 
																		
	Sections(name,identity,age,gender,address,phone,secret,day);  
}                  
void Non_student(void)
{
	char name[50],address[20],gender[8],day[12];  		//this function concerns nonstudent visitors 
	int identity,age,phone,secret=2;//the value "2" indicates that these information come from "nonstudent function"			
	
	system("color 3f");
	printf("Persal Information\n");
	printf("---------------------\n");				
	printf("Enter your name : ");
	gets(name);
	printf("Enter your passport no : ");
	scanf("%d",&identity);
	printf("what is your age : ");
	scanf("%d",&age);
	printf("What is your sex : ");
	scanf("%s",gender);
	printf("Where is your address : ");
	fflush(stdin);
	gets(address);
	printf("What is your phone number :");
	scanf("%d",&phone);
	printf("Enter the day that you wish to make the appointment on : ");
	scanf("%s",day);
	system("cls");
	Sections(name,identity,age,gender,address,phone,secret,day);

}
void Sections(char name[50],int identity ,int age , char gender[8] , char address[20],int phone,int secret,char day[12])
{
		int x;
		char section;
	printf("\n\n                               Hello Mr.%s\n\n",name);
	
	
		printf("\t\t\tPlaese select the section : \n\n");
	printf("\t\t\t************************************************************\n");
	printf("\t\t\t** A)Cardiology           ** D)Dental                     **\n");
	printf("\t\t\t************************************************************\n");
	printf("\t\t\t** B)E.N.T                ** E)Dermatology                **\n");
	printf("\t\t\t************************************************************\n");
	printf("\t\t\t** C)Eye                  ** F)Pediatric                  **\n");
	printf("\t\t\t************************************************************\n");
	printf("\n\n");
	printf("PLease select the section : ");
	for(x=1;x<=1;x++)
	{
	fflush(stdin);
	scanf("%c",&section);
	system("cls");
	if(section=='A' || section=='a')
	Cradiology(name,identity,age,gender,address,phone,secret,day);
	else if(section=='B' || section=='b')
	E_N_T(name,identity,age,gender,address,phone,secret,day);
	else if(section=='C' || section=='c')
	Eye(name,identity,age,gender,address,phone,secret,day);
	else if(section=='D' || section=='d')
	Dental(name,identity,age,gender,address,phone,secret,day);
	else if(section=='E' || section=='e')
	Dermatology(name,identity,age,gender,address,phone,secret,day);
	else if(section=='F' || section=='f')
	Pediatric(name,identity,age,gender,address,phone,secret,day);
	else 
	{
	printf("invalid input, please try again : ");
		x--;
		continue;}
	
	}
}
void Cradiology(char name[50],int identity ,int age , char gender[8] , char address[20],int phone,int secret,char day[12])
{	char doctorname[50],doctorQ[100],doctor;
	int x,doctorprice,doctorfrom,doctorto;
	printf("\n\n\n");
	printf("\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\t\t\t^^          Name           ^^         Qualifications           ^^       price       ^^     Time       ^^\n");
	printf("\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\t\t\t^^ 1)Abdualmajeed Mohammed ^^  Bachelor & Master & PHD from    ^^        250RM      ^^    12 - 22     ^^\n");   
	printf("\t\t\t^^                         ^^     University of Oxford         ^^                   ^^                ^^\n");
	printf("\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\t\t\t^^ 2)Mohammed Saleh        ^^    Bachelor & Master from        ^^        150RM      ^^    9  - 16     ^^\n");   
	printf("\t\t\t^^                         ^^    Johns Hopkins University      ^^                   ^^                ^^\n");
	printf("\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");                                       
	printf("\t\t\t^^ 3)Noor Sara hifth       ^^  Bachelor & Master & PHD from    ^^        150RM      ^^    9  - 18     ^^\n");   
	printf("\t\t\t^^                         ^^    University of Cambridge       ^^                   ^^                ^^\n");
	printf("\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	
	printf("\nPlease choose the appropriate doctor for you : ");
	for(x=1;x<=1;x++)
	{
	fflush(stdin);
	scanf("%c",&doctor);
	if(doctor=='1')
	{strcpy(doctorname,"Abdualmajeed Mohammed");
	strcpy(doctorQ,"Bachelor & Master & PHD fromUniversity of Oxford ");
	doctorprice=250;
	doctorfrom=12;
	doctorto=22;}
	else if(doctor=='2')
	{	strcpy(doctorname,"Mohammed Saleh");
		strcpy(doctorQ,"Bachelor & Master from Johns Hopkins University ");
		doctorprice=150;
		doctorfrom=9;
		doctorto=16;}
	else if(doctor=='3')
	{strcpy(doctorname,"Noor Sara hifth");
	strcpy(doctorQ,"Bachelor & Master & PHD from niversity of Cambridge");
	doctorprice=150;
	doctorfrom=9;
	doctorto=18;}
	else 
	{printf("invalid input, please try again\n");
		x--;
		continue;}
	}
	
	receipt(name,identity,age,gender,address,phone,doctorname,doctorQ,doctorprice,doctorfrom,doctorto,secret);
}
void E_N_T(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12])
{	char doctorname[50],doctorQ[100],doctor;
	int x,doctorprice,doctorfrom,doctorto;
	printf("\n\n\n");
	printf("\t\t\t|=================================================================================================|\n");
	printf("\t\t\t|          Name           |         Qualifications           |       price       |     Time       |\n");
	printf("\t\t\t|=================================================================================================|\n");
	printf("\t\t\t| 1)Asma Esmail           |    Bachelor & Master from        |        50RM       |    15 - 23     |\n");   
	printf("\t\t\t|                         |     University of IIUM           |                   |                |\n");
	printf("\t\t\t|=========================|==================================|===================|================|\n");
	printf("\t\t\t| 2)Ahmed Ali             |        Bachelor from             |        70RM       |    6 - 12      |\n");   
	printf("\t\t\t|                         |    Alqaheria University          |                   |                |\n");
	printf("\t\t\t|=========================|==================================|===================|================|\n");                                       
	printf("\t\t\t| 3)talal aljelany        |  Bachelor & Master & PHD from    |        150RM      |    9 - 17      |\n");   
	printf("\t\t\t|                         |    University of Jorden          |                   |                |\n");
	printf("\t\t\t||================================================================================================|\n");
	
	printf("\nPlease choose the appropriate doctor for you : ");
	for(x=1;x<=1;x++)
	{
	fflush(stdin);
	scanf("%c",&doctor);
	if(doctor=='1')
	{strcpy(doctorname,"Asma Esmail");
	strcpy(doctorQ,"Bachelor & Master from University of IIUM");
	doctorprice=50;
	doctorfrom=15;
	doctorto=23;}
	else if(doctor=='2')
	{	strcpy(doctorname,"Ahmed Ali ");
		strcpy(doctorQ,"Bachelor from Alqaheria University");
		doctorprice=70;
		doctorfrom=6;
		doctorto=12;}
	else if(doctor=='3')
	{strcpy(doctorname,"talal aljelany");
	strcpy(doctorQ,"Bachelor & Master & PHD from University of Jorden");
	doctorprice=150;
	doctorfrom=9;
	doctorto=17;}
	else 
	{printf("invalid input, please try again\n");
		x--;
		continue;}
	}
	
	receipt(name,identity,age,gender,address,phone,doctorname,doctorQ,doctorprice,doctorfrom,doctorto,secret);
}
void Eye(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12])
{	char doctorname[50],doctorQ[100],doctor;
	int x,doctorprice,doctorfrom,doctorto;
	printf("\n\n\n");
	printf("\t\t\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("\t\t\t|          Name           |         Qualifications           |       price       |     Time       |\n");
	printf("\t\t\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("\t\t\t| 1)Mahmood Aleedo        |  Bachelor & Master & PHD from    |        300RM      |    15 - 24     |\n");   
	printf("\t\t\t|                         |     Harvard University           |                   |                |\n");
	printf("\t\t\t|>>>>>>>>>>>>>>>>>>>>>>>>>|>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<|<<<<<<<<<<<<<<<<<<<|<<<<<<<<<<<<<<<<|\n");
	printf("\t\t\t| 2)Ahmaed Alqadsi        |     Bachelor % Master from       |        200RM      |     6 - 13     |\n");   
	printf("\t\t\t|                         |       Stanford University        |                   |                |\n");
	printf("\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>|>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<|<<<<<<<<<<<<<<<<<<<|<<<<<<<<<<<<<<<<|\n");                                       
	printf("\t\t\t| 3)Ali Alzhrani          |Bachelor & Master from  University|         150RM     |     9 - 13     |\n");   
	printf("\t\t\t|                         |of California, San Francisco(UCSF)|                   |                |\n");
	printf("\t\t\t|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	
	printf("\nPlease choose the appropriate doctor for you : ");
	for(x=1;x<=1;x++)
	{
	fflush(stdin);
	scanf("%c",&doctor);
	if(doctor=='1')
	{strcpy(doctorname,"Mahmood Aleedo");
	strcpy(doctorQ,"Bachelor & Master & PHD from Harvard University ");
	doctorprice=300;
	doctorfrom=15;
	doctorto=24;}
	else if(doctor=='2')
	{	strcpy(doctorname,"Ahmaed Alqadsi");
		strcpy(doctorQ,"Bachelor % Master from Stanford University ");
		doctorprice=200;
		doctorfrom=6;
		doctorto=13;}
	else if(doctor=='3')
	{strcpy(doctorname,"Ali Alzhrani");
	strcpy(doctorQ,"Bachelor & Master from  University of California, San Francisco(UCSF)");
	doctorprice=150;
	doctorfrom=9;
	doctorto=13;}
	else 
	{printf("invalid input, please try again\n");
		x--;
		continue;}
	}
	
	receipt(name,identity,age,gender,address,phone,doctorname,doctorQ,doctorprice,doctorfrom,doctorto,secret);
}
void Dental(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12])
{	char doctorname[50],doctorQ[100],doctor;
	int x,doctorprice,doctorfrom,doctorto;
	printf("\n\n\n");
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t|          Name           |         Qualifications           |       price       |     Time         |\n");
	printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t| 1)Amal Qaid kreem       |  Bachelor & Master & PHD from    |        150RM      |    13 - 23   |\n");   
	printf("\t\t\t|                         |     Harvard University           |                   |                  |\n");
	printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
	printf("\t\t\t| 2)Fera`oon              |     Bachelor % Master from       |        100RM      |     6 - 12    |\n");   
	printf("\t\t\t|                         |        Syria University          |                   |                  |\n");
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");                                       
	printf("\t\t\t| 3)Mamdouh safi          |   Bachelor from  University      |         60RM      |     9 - 14    |\n");   
	printf("\t\t\t|                         |          of Malaysia             |                   |                  |\n");
	printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
	
	printf("\nPlease choose the appropriate doctor for you : ");
	for(x=1;x<=1;x++)
	{
	fflush(stdin);
	scanf("%c",&doctor);
	if(doctor=='1')
	{strcpy(doctorname,"Amal Qaid kreem");
	strcpy(doctorQ,"Bachelor & Master & PHD from Harvard University ");
	doctorprice=150;
	doctorfrom=13;
	doctorto=23;}
	else if(doctor=='2')
	{	strcpy(doctorname,"Fera`oon");
		strcpy(doctorQ,"Bachelor % Master from Syria University");
		doctorprice=100;
		doctorfrom=6;
		doctorto=12;}
	else if(doctor=='3')
	{strcpy(doctorname,"Mamdouh safi");
	strcpy(doctorQ,"Bachelor from  University of Malaysia ");
	doctorprice=60;
	doctorfrom=9;
	doctorto=14;}
	else 
	{printf("invalid input, please try again\n");
		x--;
		continue;}
	}
	
	receipt(name,identity,age,gender,address,phone,doctorname,doctorQ,doctorprice,doctorfrom,doctorto,secret);
}
void Dermatology(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12])
{	char doctorname[50],doctorQ[100],doctor;
	int x,doctorprice,doctorfrom,doctorto;
	printf("\n\n\n");
	printf("\t\t\t|....................................................................................................|\n");
	printf("\t\t\t|          Name           :         Qualifications            :       price       :     Time         |\n");
	printf("\t\t\t|....................................................................................................|\n");
	printf("\t\t\t| 1)Waleed Reda           :  Bachelor & Master & PHD from     :        210RM      :    15 - 23       |\n");   
	printf("\t\t\t|                         :     Yale University               :                   :                  |\n");
	printf("\t\t\t|....................................................................................................|\n");
	printf("\t\t\t| 2)Abadi alrimy          :     Bachelor % Master from        :        170RM      :     6 - 14       |\n");   
	printf("\t\t\t|                         :       Karolinska Institute        :                   :                  |\n");
	printf("\t\t\t|....................................................................................................|\n");                                       
	printf("\t\t\t| 3)slah alseaetry        :      Bachelor & Master from       :      110RM        :     9 - 19       |\n");   
	printf("\t\t\t|                         :   UCL (University College London) :                   :                  |\n");
	printf("\t\t\t|....................................................................................................|\n");
	
	printf("\nPlease choose the appropriate doctor for you : ");
	for(x=1;x<=1;x++)
	{
	fflush(stdin);
	scanf("%c",&doctor);
	if(doctor=='1')
	{strcpy(doctorname,"Waleed Reda");
	strcpy(doctorQ,"Bachelor & Master & PHD from Yale University ");
	doctorprice=210;
	doctorfrom=15;
	doctorto=23;}
	else if(doctor=='2')
	{	strcpy(doctorname,"Abadi alrimy");
		strcpy(doctorQ,"Bachelor % Master from Karolinska Institute");
		doctorprice=170;
		doctorfrom=6;
		doctorto=14;}
	else if(doctor=='3')
	{strcpy(doctorname,"slah alseaetry");
	strcpy(doctorQ," Bachelor & Master from UCL (University College London)");
	doctorprice=110;
	doctorfrom=9;
	doctorto=19;}
	else 
	{printf("invalid input, please try again\n");
		x--;
		continue;}
	}
	
	receipt(name,identity,age,gender,address,phone,doctorname,doctorQ,doctorprice,doctorfrom,doctorto,secret);
}
void Pediatric(char name[50],int  identity,int age , char gender[8] , char address[20],int phone,int secret,char day[12])
{	char doctorname[50],doctorQ[100],doctor;
	int x,doctorprice,doctorfrom,doctorto;
	printf("\n\n\n");
	printf("\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("\t\t\t&&          Name           &&         Qualifications           &&       price       &&     Time       &&\n");
	printf("\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("\t\t\t&& 1)Lila bint tha'lb      &&  Bachelor & Master & PHD from    &&        225RM      &&    12 - 24     &&\n");   
	printf("\t\t\t&&                         &&      University of Sydney        &&                   &&                &&\n");
	printf("\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("\t\t\t&& 2)Yoosf Alnjar          &&    Bachelor & Master from        &&        175RM      &&     9 - 18  &&\n");   
	printf("\t\t\t&&                         &&    The University of Melbourne   &&                   &&                &&\n");
	printf("\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");                                       
	printf("\t\t\t&& 3)Abu Lahab             &&     Bachelor & Master  from      &&        140RM      &&     9 - 24 &&\n");   
	printf("\t\t\t&&                         &&     University of Washington     &&                   &&                &&\n");
	printf("\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	
	printf("\nPlease choose the appropriate doctor for you : ");
	for(x=1;x<=1;x++)
	{
	fflush(stdin);
	scanf("%c",&doctor);
	if(doctor=='1')
	{strcpy(doctorname,"Lila bint tha'lb");
	strcpy(doctorQ,"Bachelor & Master & PHD from University of Sydney");
	doctorprice=225;
	doctorfrom=12;
	doctorto=24;}
	else if(doctor=='2')
	{	strcpy(doctorname,"Yoosf Alnjar");
		strcpy(doctorQ,"Bachelor & Master from The University of Melbourne");
		doctorprice=175;
		doctorfrom=9;
		doctorto=18;}
	else if(doctor=='3')
	{strcpy(doctorname,"Abu Lahab");
	strcpy(doctorQ," Bachelor & Master  from University of Washington ");
	doctorprice=140;
	doctorfrom=9;
	doctorto=14;}
	else 
	{printf("invalid input, please try again\n");
		x--;
		continue;}
	}
	
	receipt(name,identity,age,gender,address,phone,doctorname,doctorQ,doctorprice,doctorfrom,doctorto,secret);
}

void receipt(char name[50],int identity,int age,char gender[8],char address[20],int phone,char doctorname[50],char doctorQ[100],int doctorprice,int doctorfrom,int doctorto,int secret,char day[12])
{
	int discounted_cost;
	char change;
	system("cls");
	system("color a4");
		printf("\n\n\t\t\t============================Receipt=========================================\n\n\n");
	printf("             Name : %s                           \n\n\n",name);
	printf("             Matric card no : %d                 \n\n\n",identity);
	printf("             Age : %d                            \n\n\n",age);
	printf("             Gender : %s                         \n\n\n",gender);
	printf("             Address : %s                        \n\n\n",address);
	printf("             Phone no : %d                       \n\n\n",phone);
	printf("             Doctor's name : %s                  \n\n\n",doctorname);
	printf("             Qualification : %s                  \n\n\n",doctorQ);
	printf("             Cost : RM %d                        \n\n\n",doctorprice);
	printf("             Day  : %s                           \n\n\n",day);
	printf("             Time avalible : %d-%d               \n\n\n",doctorfrom,doctorto);
	if(secret==1)
	{
	discounted_cost=doctorprice-(doctorprice*0.20);
	printf("         As you are student you have discount 20 persent,so the cost is : RM %d\n\n\n",discounted_cost);	}
	printf("\n\n\tPress 'N' to change the appointment : ");
	fflush(stdin);
	scanf("%c",&change);
	if(change=='N' || change=='n')
	{
		system("cls");
		Sections(name,identity,age,gender,address,phone,secret,day);	
	}
}
