#include<stdio.h>
#include<getopt.h>
#include <stdlib.h>
#include<unistd.h>
#include <iostream>

using namespace std;
char inputFile[20],outputFile[20];
void Read(char IOpath[] );
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
int main(int argc ,char * argv[])
{
//	int option=0;
//	char*inputFile=NULL;
//	char*oututFile=NULL;
//	while((option=getopt(argc,argv,"f:o:"))!=-1){
//		switch(option)
//		{
//			case 'f' :
//				inputFile=optarg;				
//				break;
//			case 'o' :
//
//				oututFile=optarg;
//				break;
//			default:
//				printf("use -f[input file] -o[output file]");
//				exit(1);
//				break;
//		}
//		
//		}
//				if (inputFile==NULL &&oututFile==NULL)
//				{
//						printf("try agian use -f[input file] and -o[output file]");
//						exit(1);
//				}
//				
//				else if (inputFile==NULL)
//				{
//					printf("try agian use -f[input file]");
//					exit(1);
//				}
//						
//				 else if (oututFile==NULL)
//				 {
//				 	printf("try agian use -o[output file]");
//				 	exit(1);
//				 }
//					
//		char IOpath[20];
//	printf("Enter the input and output file: ");
//	fgets(IOpath,20,stdin);
	//Read(IOpath);
	

	
	

int choise;
printf("\n\n\n");
logo();


                                                                                                                                                                                                                                                                                                        
printf("1)Scheduling Method(None)\n2)Preemptive Mode(Off)\n3)Show Result\n4)End Program\nOption>");
scanf("%d",&choise);
int method=0;
bool back=false;
switch (choise)
{
	case 1:
	//	system("@cls||clear"); //use to clear the terminal
	while(back!=true){
		printf("\nplese select one of the methods below :\n");
		printf("(1) First Come, First Served Scheduling\n(2) Shortest-Job-First Scheduling\n(3)Priority Scheduling\n(4)Round-Robin Scheduling\n(5)Back\nOption>>");
		scanf("%d",&method);
		printf("method %d",method);
		if (method==5)
		{
			system("@cls||clear");
			back=true;
			logo();
			
		}
			}
		break;
		
		
	
		
		
}

}
	
void Read(char IOpath[] )
{
for (int i=0; IOpath[i]!='\0';i++)
	{
		if (inputFile[0]=='\0'){
		
					if(IOpath[i]=='-'&&IOpath[i+1]=='f')
					{
						i=i+3;
						for (int y=0;IOpath[i]!=' ';y++)
						{
							inputFile[y]=IOpath[i];
							i++;
							
						}
						//cout<<inputFile;
					}
					}
					if (outputFile[0]=='\0'){
					if(IOpath[i]=='-'&&IOpath[i+1]=='o')
					{
						i=i+3;
						for (int y=0;IOpath[i]!=' ';y++)
						{
							outputFile[y]=IOpath[i];
							i++;
							
						}
						//cout<<outputFile;
					}
	}
}
	
if (inputFile[0]!='\0'&& outputFile[0]!='\0')
	{
		printf("[+] input file are completed\n");
		printf("[+] output file are completed");	
	}
else if(inputFile[0]=='\0'&& outputFile[0]=='\0')
{
	while(inputFile[0]=='\0'&& outputFile[0]=='\0'){
		printf("please select the input&output file use -f & -o \n");
	printf("Enter the input and output file: ");
	fgets(IOpath,20,stdin);
	Read(IOpath);
	}
	
}

else if(inputFile[0]!='\0'&& outputFile[0]=='\0')
{
	while(outputFile[0]=='\0')
	{
		printf("use -o to enter output file\n");
		printf("Enter the output file: ");
		fgets(IOpath,20,stdin);
		Read(IOpath);
	}
	
}

else if(inputFile[0]=='\0'&& outputFile[0]!='\0')
{
	while(inputFile[0]=='\0'){
	
	printf("use -f to enter input file\n");
	printf("Enter the input file: ");
	fgets(IOpath,20,stdin);
	Read(IOpath);
}
}}
	
