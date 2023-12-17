#include <stdio.h>
#include <iostream>
#include<unistd.h>
#include <string.h>
#include<stdlib.h>
using namespace std;
char inputFile[20],outputFile[20];
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
		cout<<sleep(1)<<"[+] input file are completed\n";
		cout<<sleep(1)<<"[+] output file are completed";	
	}
else if(inputFile[0]=='\0'&& outputFile[0]=='\0')
{
	while(inputFile[0]=='\0'&& outputFile[0]=='\0'){
		cout<<"please select the input&output file use -f & -o \n";
	printf("Enter the input and output file: ");
	cin.getline(IOpath,sizeof(IOpath));
	Read(IOpath);
	}
	
}

else if(inputFile[0]!='\0'&& outputFile[0]=='\0')
{
	while(outputFile[0]=='\0')
	{
		printf("use -o to enter output file\n");
		printf("Enter the output file: ");
		cin.getline(IOpath,sizeof(IOpath));
		Read(IOpath);
	}
	
}

else if(inputFile[0]=='\0'&& outputFile[0]!='\0')
{
	while(inputFile[0]=='\0'){
	
	printf("use -f to enter input file\n");
	printf("Enter the input file: ");
	cin.getline(IOpath,sizeof(IOpath));
	Read(IOpath);
}
}
	
			
}
int main()
{
	char IOpath[20];
	printf("Enter the input and output file: ");
	
	cin.getline(IOpath,sizeof(IOpath));
	Read(IOpath);
	

	
	

	int choise;
printf("\n\n\n");

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

                                                                                                                                                                                                                                                                                                        
printf("1)Scheduling Method(None)\n2)Preemptive Mode(Off)\n3)Show Result\n4)End Program\nOption>");
cin>>choise;
 

                                                                                                                                                                                   
                                                                                                                                                                                        
                                                                                                                                                                                        
                                                              
                                                              
                                                              
                                                                                                                                                                                                                           
                                                                                                                                                                                                          
                                     

                                                                      
                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                
                                                                                                                                                                                                
                                                                                                                                                                                                            
         

                                                                                                                                                                                                             
                                                                                                                                                                                                             
                                                                                                                                                                                                                                                    
                                                          
                                                          
                                                          



}
