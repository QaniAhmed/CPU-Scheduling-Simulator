#include<getopt.h>
#include<unistd.h>
#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct processess{
	int p=0;
	int B;
	int A;
};
struct processessafter{
	int p=0;
	int B;
	int A;
};
void elementDeleteafterprint(struct processessafter ppi[], int *process, int index) {
    if (index < 1 || index > *process) {
        printf("Invalid index\n");
        return;
    }

    // Shift elements to the left from the index to the end
    for (int i = index; i < *process; i++) {
        ppi[i] = ppi[i + 1];
    }

    // Decrease the size of the array
    (*process)--;
}
char inputFile[100],outputFile[100];
void Read(char IOpath[] );
void logo();
void logo1();
//void CheckInputFile(FILE*f){
//	f=fopen(inputFile,"r");
//				char checkEmpty;
//				checkEmpty=fgetc(f);
//				if (checkEmpty==NULL)
//					{
//						printf("the input file is empty, try agian");
//				 		exit(1);
//					}	
//
//}
void FCFS(FILE*f);
void sjf(char*inputFile);

int main(int argc ,char * argv[])
{
	
	//
//		 processessafter ppi[100];
//	int bburstTime[100];
//	queue<int> arrivalTime;
//	queue<int> shortJob;
//	processess p[4];															//sjf varible
//	char c;int count=1,process=0;;
//	char arr[100];
//	char bu[100];
//	int totalBurstTime=0,k,v,j,minarr,maxarr,time=0,i=1,maxBurst,burst,arr0;
//	float timeT=0;
	//
	FILE *f;
	int option=0;
	char*inputFile=NULL,*outputFile=NULL;
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
				 		//check if the input file is empty
				 		//CheckInputFile(f);
				
				
int choise;
printf("\n\n\n");
logo1();
bool end =false;
char schedulingMethod [100]="none",Preemptivemethod [100]="Preemptive";
             f=fopen(inputFile,"r");                  
while (end==false){
                                                                                                                                                                                                                                                                        
printf("\n1)Scheduling Method(%s)\n2)Preemptive Mode(%s)\n3)Show Result\n4)End Program\nOption>",schedulingMethod,Preemptivemethod);
scanf("%d",&choise);
int method=0,columns=0;
bool back=false;//,change = false;
int proc=0,count=1;
			char c;
int times [] ={0,1,1,2,3};

switch (choise)
{
	case 1:
	//	system("@cls||clear"); //use to clear the terminal
	while(back!=true){
		printf("\nplese select one of the methods below :\n");
		printf("(1) First Come, First Served Scheduling\n(2) Shortest-Job-First Scheduling\n(3)Priority Scheduling\n(4)Round-Robin Scheduling\n(5)Back\nOption>>");
		scanf("%d",&method);
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
	
	

		//	FCFS(f);
		
//FILE *f;
//f=fopen("input.txt","r");  
	
	 sjf(inputFile);
	break;

	case 4:
		printf("\nGood bye ^-^\n");
		return 0;
		
		
		
}		

}
}

void logo(){
printf("        CCCCCCCCCCCCCPPPPPPPPPPPPPPPPP   UUUUUUUU     UUUUUUUU           /////// SSSSSSSSSSSSSSS    SSSSSSSSSSSSSSS     \n");sleep(1);
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
printf("        CCCCCCCCCCCCCPPPPPPPPPPPPPPPPP   UUUUUUUU     UUUUUUUU           /////// SSSSSSSSSSSSSSS    SSSSSSSSSSSSSSS    \n");
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

void FCFS(FILE*f){
		//f=fopen(inputFile,"r");
	int BurstTime,ArrivalTime,Time=0,process=0,count=1,wait=0,TotalWait=0;//FCFS
	char c;

		while(!feof(f)){
							//int BurstTime,ArrivalTime,Time,process=1,count=1,wait;
						c=fgetc(f);
						
						if (c==':') 
								continue;
						
						 if (count==1) 
						 		BurstTime=c-'0';

						 if (count==2)
								ArrivalTime=c-'0';
					
						 if (count==3)
					{
						wait=Time-ArrivalTime; 
						Time +=BurstTime;
						process++;
						printf("\nprocess [%d]:%dms\n",process,wait);
						TotalWait+=wait;
						count=0;
						continue;
					}
						count++;
		
		
		
			}
			
			printf("\nAverage Waiting Time:%dms\n",TotalWait/process);
							
			
		}
void sjf(char*inputFile)
{
			
FILE *f;
f=fopen(inputFile,"r"); 
	 	struct processess p[10000];
    struct processessafter ppi[10000];
    char line[100*1000];  // Assuming a maximum line length of 100 characters
    int process = 0;
    int totalBurstTime = 0;
    float timeT = 0;
    int maxBurst=p[0].B,minarr=p[0].A,maxarr=p[0].A;
    	
	//FILE *f; 
	//f=fopen("input.txt","r");  
    
//read from the file 
    while (fgets(line, sizeof(line), f) != NULL) {
        char *token = strtok(line, ":");
        int count = 0;

        while (token != NULL) {
            if (count == 0) {
                p[process].p = process + 1;
                p[process].B = atoi(token);
                if (p[process].B>maxBurst)
                		maxBurst=p[process].B;
            } else if (count == 1) {
                p[process].A = atoi(token);
                if (p[process].A<minarr)
                		minarr=p[process].A;
                if (p[process].A>minarr)
                		maxarr=p[process].A;
            }

            token = strtok(NULL, ":");
            count++;
        }
			printf("process[%d]>>BurstTime[%d]>>arrivalTime[%d]\n\n",p[process].p,p[process].B,p[process].A);
        process++;
    }
    fclose(f);//close the file after reading
    printf("max Burst time >>%d\tminarr>>%d\tmaxarr>>%d\t%d",maxBurst,minarr,maxarr,process);
    
    int u ;
    int v=0;
    for (int d=0;d<=maxBurst;d++)
			{
			for (u=0;u<=process;u++)
			{ 
				if (p[u].B==d)
				{							
							ppi[v].p=p[u].p;//1					//processess in order depending burst Time
							ppi[v].A=p[u].A;//
							ppi[v].B=p[u].B;//
							totalBurstTime+=p[u].B;
							

					if(minarr>ppi[v].A)
					{
						minarr=ppi[v].A;
					}
					if(maxarr<ppi[v].A)
					{
						maxarr=ppi[v].A;
					}		
						v++;	
					}			
					
			}
			//u=0;
			
		}
		
		 for (int d = 1; d <= process; d++) {
        printf("\n<process[%d]\t<ArrivalTime:[%d]\t<BusrtTime:[%d]\n\n", ppi[d].p, ppi[d].A, ppi[d].B);
    				}	
        int time=0;
        int enter=0;
        int checker=0;
        int waitTime=0;
        int i;
        int final=process;
        float totalWaitTimes;
        if(time<minarr)
        			time=minarr;
        //int count=1;
        for(int timer=0;time<totalBurstTime;timer++)
        {

	for( i=1;i<=process;i++)
        	{
        		checker=time;
        		if(ppi[i].A<=time)
        		{
        			
        			waitTime = time-ppi[i].A;
        				totalWaitTimes+=waitTime;
				printf("\n<process[%d]\t<ArrivalTime:[%d]\t<BusrtTime:[%d]\t Time%d", ppi[i].p, ppi[i].A, ppi[i].B,waitTime);
        			time+=ppi[i].B;	
        		
        			// Delete the element after printing
                elementDeleteafterprint(ppi, &process, i);
                break;
				}
				
				else if (checker==time  && i==process)
						time++;	
			}
								
}
//find the average time 
   	printf("\naverage waiting time is :%f",totalWaitTimes/final);
   	totalWaitTimes=0;
   	final=0;
   	//delete all structs
//   	for (int i = 0; i < final; i++) {
//        ppi[i].A=0;  
//        ppi[i].B=0;
//        ppi[i].p=0;
//        ////
//        p[i].A=0;
//        p[i].B=0;
//        p[i].p=0;
//    }

   	
}
