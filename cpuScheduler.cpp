#include<stdio.h>
#include<getopt.h>
#include <stdlib.h>
#include<unistd.h>
#include <iostream>
#include <string.h>

using namespace std;
//void readFile(File *f,char*inpuFile)
//{
//	char c;
//	fp=fopen(inpuFile,"r");
//	c=fgetc(fp);
//	printf(%c,c);
//}
char inputFile[20],outputFile[20];
void Read(char IOpath[] );
void logo();
void logo1();
int main(int argc ,char * argv[])
{
	FILE *f;
	int option=0;
	char*inputFile=NULL;
	char*outputFile=NULL;
	while((option=getopt(argc,argv,"f:o:"))!=-1){
		switch(option)
		{
			case 'f' :
				inputFile=optarg;				
				break;
			case 'o' :

				outputFile=optarg;
				break;
			default:
				printf("use -f[input file] -o[output file]");
				exit(1);
				break;
		}
		
		}
				if (inputFile==NULL &&outputFile==NULL)
				{
						printf("try agian use -f[input file] and -o[output file]");
						exit(1);
				}
				
				else if (inputFile==NULL)
				{
					printf("try agian use -f[input file]");
					exit(1);
				}
						
				 else if (outputFile==NULL)
				 {
				 	printf("try agian use -o[output file]");
				 	exit(1);
				 }
				 

int choise;
printf("\n\n\n");
logo1();

bool end =false;
char schedulingMethod [100]="none";  
char Preemptivemethod [100]="Preemptive";                              
while (end==false){
                                                                                                                                                                                                                                                                        
printf("1)Scheduling Method(%s)\n2)Preemptive Mode(%s)\n3)Show Result\n4)End Program\nOption>",schedulingMethod,Preemptivemethod);
scanf("%d",&choise);
int method=0;
bool back=false;
bool change = false;
char c;
int columns=0;
switch (choise)
{
	case 1:
	//	system("@cls||clear"); //use to clear the terminal
	while(back!=true){
		printf("\nplese select one of the methods below :\n");
		printf("(1) First Come, First Served Scheduling\n(2) Shortest-Job-First Scheduling\n(3)Priority Scheduling\n(4)Round-Robin Scheduling\n(5)Back\nOption>>");
		scanf("%d",&method);
		//printf("you selectedmethod %d",method);
		switch (method)
		{
			case 1:
				system("@cls||clear");
				strcpy(schedulingMethod,"First Come, First Served Scheduling");
				printf("\n>> you selcted method: %d,press back <<\n",method);
				break;
			case 2:
				system("@cls||clear");
				strcpy(schedulingMethod,"Shortest-Job-First Scheduling");
				printf("\n>> you selcted method: %d,press back <<\n",method);
				break;
			case 3:
				system("@cls||clear");
				strcpy(schedulingMethod,"Priority Scheduling");
				printf("\n>> you selcted method: %d,press back <<\n",method);
				break;
			case 4:
				system("@cls||clear");
				strcpy(schedulingMethod,"Round-Robin Scheduling");
				printf("\n>> you selcted method: %d,press back <<\n",method);
				break;
				
			case 5:
			system("@cls||clear"); //clear the terminal 
			back=true;
			logo1();
			break;
		}
		
			}
		break;	
	case 2:
		while(method!=3){
		
		printf("\nplese select one of the methods below :\n");
		printf("(1) Preemptive(Default)\n(2) Non-Preemptive\n(3)Back\n>>>");
		scanf("%d",&method);
		
		if (method==2)
		{
			system("@cls||clear");
			strcpy(Preemptivemethod,"Non-Preemptive");
			printf("\n>> you selcted method: %d,press back <<\n",method);
			//break;
		}
	}
	system("@cls||clear");
	logo1();
	break;
	case 3:
	break;
	
	case 4:
		printf("\nGood bye ^-^\n");
		return 0;
		
		
		
		

}
}
}
void logo(){
	printf("      CCCCCCCCCCCCCPPPPPPPPPPPPPPPPP   UUUUUUUU     UUUUUUUU           /////// SSSSSSSSSSSSSSS    SSSSSSSSSSSSSSS     \n");sleep(1);
printf("     CCC::::::::::::CP::::::::::::::::P  U::::::U     U::::::U          /:::::/SS:::::::::::::::S SS:::::::::::::::S  \n");
printf("   CC:::::::::::::::CP::::::PPPPPP:::::P U::::::U     U::::::U         /:::::/S:::::SSSSSS::::::SS:::::SSSSSS::::::S  \n");
printf("  C:::::CCCCCCCC::::CPP:::::P     P:::::PUU:::::U     U:::::UU        /:::::/ S:::::S     SSSSSSSS:::::S     SSSSSSS  \n");sleep(1);
printf(" C:::::C       CCCCCC  P::::P     P:::::P U:::::U     U:::::U        /:::::/  S:::::S            S:::::S               \n");
printf("C:::::C                P::::P     P:::::P U:::::D     D:::::U       /:::::/   S:::::S            S:::::S               \n");
printf("C:::::C                P::::PPPPPP:::::P  U:::::D     D:::::U      /:::::/     S::::SSSS          S::::SSSS            \n");sleep(1);
printf("C:::::C                P:::::::::::::PP   U:::::D     D:::::U     /:::::/       SS::::::SSSSS      SS::::::SSSSS       \n");
printf("C:::::C                P::::PPPPPPPPP     U:::::D     D:::::U    /:::::/          SSS::::::::SS      SSS::::::::SS     \n");
printf("C:::::C                P::::P             U:::::D     D:::::U   /:::::/              SSSSSS::::S        SSSSSS::::S    \n");sleep(1);
printf("C:::::C                P::::P             U:::::D     D:::::U  /:::::/                    S:::::S            S:::::S   \n");
printf(" C:::::C       CCCCCC  P::::P             U::::::U   U::::::U /:::::/                     S:::::S            S:::::S   \n");
printf("  C:::::CCCCCCCC::::CPP::::::PP           U:::::::UUU:::::::U/:::::/          SSSSSSS     S:::::SSSSSSSS     S:::::S   \n");
printf("   CC:::::::::::::::CP::::::::P            UU:::::::::::::UU/:::::/           S::::::SSSSSS:::::SS::::::SSSSSS:::::S   \n");sleep(1);
printf("     CCC::::::::::::CP::::::::P              UU:::::::::UU /:::::/            S:::::::::::::::SS S:::::::::::::::SS    \n");
printf("        CCCCCCCCCCCCCPPPPPPPPPP                UUUUUUUUU  ///////              SSSSSSSSSSSSSSS    SSSSSSSSSSSSSSS      \n\n\n\n");
	
}	
void logo1(){
	printf("      CCCCCCCCCCCCCPPPPPPPPPPPPPPPPP   UUUUUUUU     UUUUUUUU           /////// SSSSSSSSSSSSSSS    SSSSSSSSSSSSSSS     \n");
printf("     CCC::::::::::::CP::::::::::::::::P  U::::::U     U::::::U          /:::::/SS:::::::::::::::S SS:::::::::::::::S  \n");
printf("   CC:::::::::::::::CP::::::PPPPPP:::::P U::::::U     U::::::U         /:::::/S:::::SSSSSS::::::SS:::::SSSSSS::::::S  \n");
printf("  C:::::CCCCCCCC::::CPP:::::P     P:::::PUU:::::U     U:::::UU        /:::::/ S:::::S     SSSSSSSS:::::S     SSSSSSS  \n");
printf(" C:::::C       CCCCCC  P::::P     P:::::P U:::::U     U:::::U        /:::::/  S:::::S            S:::::S               \n");
printf("C:::::C                P::::P     P:::::P U:::::D     D:::::U       /:::::/   S:::::S            S:::::S               \n");
printf("C:::::C                P::::PPPPPP:::::P  U:::::D     D:::::U      /:::::/     S::::SSSS          S::::SSSS            \n");
printf("C:::::C                P:::::::::::::PP   U:::::D     D:::::U     /:::::/       SS::::::SSSSS      SS::::::SSSSS       \n");
printf("C:::::C                P::::PPPPPPPPP     U:::::D     D:::::U    /:::::/          SSS::::::::SS      SSS::::::::SS     \n");
printf("C:::::C                P::::P             U:::::D     D:::::U   /:::::/              SSSSSS::::S        SSSSSS::::S    \n");
printf("C:::::C                P::::P             U:::::D     D:::::U  /:::::/                    S:::::S            S:::::S   \n");
printf(" C:::::C       CCCCCC  P::::P             U::::::U   U::::::U /:::::/                     S:::::S            S:::::S   \n");
printf("  C:::::CCCCCCCC::::CPP::::::PP           U:::::::UUU:::::::U/:::::/          SSSSSSS     S:::::SSSSSSSS     S:::::S   \n");
printf("   CC:::::::::::::::CP::::::::P            UU:::::::::::::UU/:::::/           S::::::SSSSSS:::::SS::::::SSSSSS:::::S   \n");
printf("     CCC::::::::::::CP::::::::P              UU:::::::::UU /:::::/            S:::::::::::::::SS S:::::::::::::::SS    \n");
printf("        CCCCCCCCCCCCCPPPPPPPPPP                UUUUUUUUU  ///////              SSSSSSSSSSSSSSS    SSSSSSSSSSSSSSS      \n\n\n\n");
	
}
	
//read from the input file
/*	f=fopen(inputFile,"r");
				 
				 if (f==NULL)
				 {
				 	printf("\ninput file not exits try agian @-@\n");//should use whole path
				 	exit(1);
				 	
				 }
		while(!feof(f)){
			if (columns==3)
		{
			printf("\n");
			columns=0;
		}
		c=fgetc(f);
		if (c==':')
		{
			printf("%c",c);
			continue;
		}
		printf("%c",c);
		columns++;
		
			}*/
