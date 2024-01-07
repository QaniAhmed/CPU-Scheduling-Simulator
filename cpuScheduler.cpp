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
	int pr;
	int wait;
};
struct processessafter{
	int p=0;
	int B;
	int A;
	int pr;
	int wait;
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
void elementDeleteafterprint2(struct processess p[], int *process, int index) {
    if (index < 1 || index > *process) {
        printf("Invalid index\n");
        return;
    }

    // Shift elements to the left from the index to the end
    for (int i = index; i < *process; i++) {
        p[i] = p[i + 1];
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
void FCFS(char*inputFile);
void sjf(char*inputFile);
void Priority();
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
	//FILE *f;
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
//				if (inputFile==NULL &&outputFile==NULL)
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
//				 else if (outputFile==NULL)
//				 {
//				 	printf("try agian use -o[output file]");
//				 	exit(1);
//				 }
//				 		check if the input file is empty
//				 		CheckInputFile(f);
				
				
int choise;
printf("\n\n\n");
logo1();
bool end =false;
char schedulingMethod [100]="none",Preemptivemethod [100]="Preemptive";
             //f=fopen(inputFile,"r");                  
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
//		if (schedulingMethod=="none")
//			printf("select method before");
// else if (method ==1)
//			FCFS(inputFile);
//else if (method==2)
		//sjf(inputFile);
 //Priority();
 FCFS(inputFile);
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

void FCFS(char*inputFile)
{
//	FILE *f;
//f=fopen("input.txt","r"); 
			
FILE *f;
f=fopen("input.txt","r"); 
	 	struct processess p[10000];
    struct processessafter ppi[10000];
    struct processess result[10000];
    char line[1000*1000];  // 
    int process = 0;
    int totalBurstTime = 0;
    float timeT = 0;
    int maxBurst=p[0].B,minarr=p[0].A,maxarr=p[0].A;
 
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
                if (p[process].A>maxarr)
                		maxBurst=p[process].A;
            }

            token = strtok(NULL, ":");
            count++;
        }
			printf("process[%d]>>BurstTime[%d]>>arrivalTime[%d]\n\n",p[process].p,p[process].B,p[process].A);
        process++;
    }
    fclose(f);//close the file after reading
    printf("\n\n we hava : %d process\n\n",process);
  
///////////////////////////////////////////////////////////////////////
    int u ;
    int v=0;
    for (int d=0;d<=maxBurst;d++)
			{
				for (u=0;u<process;u++)
				{ 
						if (p[u].A==d)
						{							
									ppi[v].p=p[u].p;						//processess in order depending Arrival time
									ppi[v].A=p[u].A;
									ppi[v].B=p[u].B;
									totalBurstTime+=p[u].B;
									v++;
						}
				}
			}
				 for (int d = 0; d < process; d++) {
        printf("\n<process[%d]\t<ArrivalTime:[%d]\t<BusrtTime:[%d]\n\n", ppi[d].p, ppi[d].A, ppi[d].B);
    				}
/////////////////////////////////////////////////////////////////////    
int waitTime=0;
float averageWaitTime;
for(int j=0;j<process;j++){

		{
			
			ppi[j].wait=waitTime-ppi[j].A;
			averageWaitTime+=ppi[j].wait;
			result[j].p=ppi[j].p;
			result[j].wait=ppi[j].wait;
			 printf("\n>>>>>process[%d]\t<ArrivalTime:[%d]\t<BusrtTime:[%d] \t waitTime %d ms\n\n", ppi[j].p, ppi[j].A, ppi[j].B,ppi[j].wait);
			 waitTime+=ppi[j].B;
		}

}
		for (int d=1;d<=process;d++)
			{
			for (u=1;u<=process;u++)	                 //sorting and show the result 
			{ 
				if (result[u].p==d)
				{		
		printf("-------------------\n");					
	 	printf("  P%d : \t %dms\n",result[u].p,result[u].wait);
	 	
	 	break;
					}	
							
			}		
		}
		//printf("time %d process %d",waitTime,process);
		//averageWaitTime=waitTime/process;
		printf("Average Waiting Time: %f ms",averageWaitTime/process);
		averageWaitTime=0;
}
void sjf(char*inputFile)
{
			
FILE *f;
f=fopen("input.txt","r"); 
	 	struct processess p[10000];
    struct processessafter ppi[10000];
     struct processess result[10000];
    char line[100*1000];  // Assuming a maximum line length of 100 characters
    int process = 0;
    int totalBurstTime = 0;
    float timeT = 0;
    int maxBurst=p[0].B,minarr=p[0].A,maxarr=p[0].A;
 
    while (fgets(line, sizeof(line), f) != NULL) {
        char *token = strtok(line, ":");
        int count = 0;

        while (token != NULL) {
            if (count == 0) {											//count =0 burst time 
                p[process].p = process + 1;
                p[process].B = atoi(token);
                if (p[process].B>maxBurst)
                		maxBurst=p[process].B;	
            } else if (count == 1) {										//count =1 arrival time
                p[process].A = atoi(token);
                if (p[process].A<minarr)
                		minarr=p[process].A;
                if (p[process].A>minarr)
                		maxarr=p[process].A;
            }
            else if (count == 3)
            {
            	
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
		int itreation=1;
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
        				result[itreation].p=ppi[i].p;
						result[itreation].wait=waitTime;
				itreation++;
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
////find the average time 
//   	printf("\naverage waiting time is :%f",totalWaitTimes/final);
//   	totalWaitTimes=0;
//   	final=0;
system("@cls||clear");
printf("\t+------------------------------------------------------+\n");
printf("\t¦Scheduling Method: Shortest Job First – Non-Preemptive¦\n");
printf("\t+--------------------------------------------------------+");
printf("\nprocess\twatitngTime\n");
    for (int d=1;d<=final;d++)
			{
			for (u=1;u<=final;u++)	                 //sorting and show the result 
			{ 
				if (result[u].p==d)
				{		
		printf("-------------------\n");					
	 	printf("  P%d : \t %dms\n",result[u].p,result[u].wait);
	 	
	 	break;
					}	
							
			}		
		}
					//find the average time 
	printf("-------------------\n");
   	printf("Average Waiting Time:  :%f ms\n",totalWaitTimes/final);
   	totalWaitTimes=0;

final=0;

   	
}
void Priority()
{
		FILE *f;
f=fopen("input.txt","r"); 
	 	struct processess p[10000];
    struct processessafter ppi[10000];
    struct processess result[10000];
    
    char line[100*1000];  // Assuming a maximum line length of 100 characters
    int process = 0;
    int totalBurstTime = 0;
    float timeT = 0;
    int maxBurst=p[0].B,minarr=p[0].A,maxarr=p[0].A,lowstpr=p[0].pr,maxpr=p[0].pr;
 
    while (fgets(line, sizeof(line), f) != NULL) {
        char *token = strtok(line, ":");
        int count = 0;

        while (token != NULL) {
            if (count == 0) {											//count =0 burst time 
                p[process].p = process + 1;
                p[process].B = atoi(token);
                if (p[process].B>maxBurst)
                		maxBurst=p[process].B;	
            } else if (count == 1) {										//count =1 arrival time
                p[process].A = atoi(token);
                if (p[process].A<minarr)
                		minarr=p[process].A;
                if (p[process].A>minarr)
                		maxarr=p[process].A;
            }
            else if (count == 2)
            {
            		p[process].pr= atoi(token);								//count =2 Priority time
			}
            

            token = strtok(NULL, ":");
            count++;
        }
			printf("process[%d]>>BurstTime[%d]>>arrivalTime[%d]>>priority[%d] \n\n",p[process].p,p[process].B,p[process].A,p[process].pr);
        process++;
    }
    fclose(f);//close the file after reading
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int u ;
    int v=0;
    int jjj=process;
    for (int d=0;d<=maxBurst;d++)
			{
			for (u=0;u<=process;u++)
			{ 
				if (p[u].pr==d)
				{							
							ppi[v].p=p[u].p;//1									//processess in order depending priority Time
							ppi[v].A=p[u].A;//
							ppi[v].B=p[u].B;//
							ppi[v].pr=p[u].pr;
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
					//	elementDeleteafterprint2(p, &process,u );
			}
			//u=0;
			
		}
		 for (int b = 0; b < process; b++) {
        p[b].A = 0;
        p[b].B = 0;
        p[b].pr = 0;
       
    }
	process=jjj;
		 for (int d = 1; d <= process; d++) {
			printf("process[%d]>>BurstTime[%d]>>arrivalTime[%d]>>priority[%d] \n\n",ppi[d].p,ppi[d].B,ppi[d].A,ppi[d].pr);
    				}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
				
int time=0;

        int checker=0,waitTime=0,i,final=process;
        float totalWaitTimes;int itreation=1;
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
        			//	p[i].wait=waitTime;
        		result[itreation].p=ppi[i].p;
				result[itreation].wait=waitTime;
				itreation++;
        				
				printf("\n\n\n\n\n\n<process[%d]\t<ArrivalTime:[%d]\t<BusrtTime:[%d]\t Time%d", ppi[i].p, ppi[i].A, ppi[i].B,waitTime);
				printf("\n<<<<<the result array > process: %d waitTime: %d >>>>>>\n",result[i].p,result[i].wait);
				
        			time+=ppi[i].B;	
        		
        			// Delete the element after printing
                elementDeleteafterprint(ppi, &process, i);
                break;
				}
				
				else if (checker==time  && i==process) // final or process?
						time++;	
			}
							
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 u=1 ;
v=0;
system("@cls||clear");
printf("\t+-----------------------------------+\n");
printf("\t¦Priority Scheduling  Non-Preemptive¦\n");
printf("\t+-----------------------------------+");
printf("\n\nScheduling Method: Priority Scheduling[Non-Preemptive]\n");
printf("\nprocess\twatitngTime\n");
    for (int d=1;d<=final;d++)
			{
			for (u=1;u<=final;u++)	                 //sorting and show the result 
			{ 
				if (result[u].p==d)
				{		
		printf("-------------------\n");					
	 	printf("  P%d : \t %dms\n",result[u].p,result[u].wait);
	 	
	 	break;
					}	
							
			}		
		}
					//find the average time 
	printf("-------------------\n");
   	printf("Average Waiting Time:  :%f ms\n",totalWaitTimes/final);
   	totalWaitTimes=0;

final=0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int burstTime2=0;
int *pp;
int timer=0;
int counterwait=0;
bool start=false;
while(timer<=maxarr)
{
		printf("--------------\nprocessess at time {%d}\n",timer);
			for(int i=1;i<=process;i++)
	{
		if (ppi[i].A<=timer)
		{
			//first time 
			if(burstTime2==0 && start==false)
			{
				burstTime2=ppi[i].B;
				pp=&ppi[i].B;
				ppi[i].wait=0;
				ppi[i].t=true;
				start=true;
			}
			//other times
			else if(burstTime2>ppi[i].B&&*pp!=0)
					{
						burstTime2=ppi[i].B;
						pp=&ppi[i].B;
						if(ppi[i].t==false)
						{
							ppi[i].wait=counterwait;
							ppi[i].t=true;
						}
						//*pp-=1;		
					}
					else if(burstTime2==ppi[i].B&&*pp!=0)
					{
						//*pp-=1;
					}
			  
			printf("****process[%d]\t burstTime[%d]\t arrivalTime%d\n",ppi[i].p,ppi[i].B,ppi[i].A);
		}
			
	}
	printf("the pointer is >>%d\n",*pp);
	if (*pp!=0)
		*pp-=1;

	timer++;
	counterwait++;
}
 for (int d = 1; d <= process; d++) {
        printf("\n<process[%d]\t<ArrivalTime:[%d]\t<BusrtTime:[%d]\t waitTime>>%d\n\n", ppi[d].p, ppi[d].A, ppi[d].B,ppi[d].wait);
    				}
	
	
}

///////////////////////////////////////////////////////////////////////////////////////
