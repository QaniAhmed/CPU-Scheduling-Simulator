#include<getopt.h>
#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct node {
	int process;
	int Burst;
	int arrival;
	int wt;
	
	struct node * next;
};
struct node* Create(int process,int Burst,int arrival)
{
	struct node * temp;
	temp=(struct node*) malloc(sizeof(struct node));
	temp->process=process;
	temp->Burst=Burst;
	temp->arrival=arrival;
	temp->next=NULL;
	return temp;

}
void display(struct node* temp)
{
	while(temp!=NULL)
	{
			printf("%d ",temp->process);
			printf("%d  ",temp->Burst);
			printf("%d  ",temp->arrival);
			printf("----->\n");
	temp=temp->next;
	}

}
void displayResult(struct node* temp)
{
	while(temp!=NULL)
	{
			printf("P%d ",temp->process);
			printf("waitTime [%d] ",temp->wt);
			printf("\n");
	temp=temp->next;
	}

}
int  countlinklist(struct node* temp)
{
		int count=0;
		while(temp!=NULL)
		{
			count++;
		temp=temp->next;
		}
		return count;
}
struct node* insertBack(struct node *header,int process,int Burst,int arrival)
{
			struct node* newNode=Create(process,Burst,arrival);
			struct node *temp;
			if (header==NULL)
			{
						header = newNode;
						return header;
			}
			temp=header;
				while(temp->next != NULL)
					{
						temp=temp->next;
					}
					temp->next = newNode;
					
			return header;
}
struct node * ArrivalBubbleSort(struct node* header)
{
	struct node *lastnode ,*currentNode ,*nextNode;
	int tempProcess,tempBurst,tempArrival,tempWait;
	
	for (lastnode=NULL; lastnode!=header->next; lastnode=currentNode)
	{
		for (currentNode=header; currentNode->next!=lastnode ;currentNode=currentNode->next)
		{
			nextNode=currentNode->next;
			if (currentNode->arrival > nextNode->arrival )
			{
				tempProcess=currentNode->process;
				tempBurst=currentNode->Burst;
				tempArrival=currentNode->arrival;
				
				currentNode->process=nextNode->process;
				currentNode->Burst=nextNode->Burst;
				currentNode->arrival=nextNode->arrival;
				
				nextNode->process=tempProcess;
				nextNode->Burst=tempBurst;
				nextNode->arrival=tempArrival;	
			}
		}
		
	}
	return header;

}
int findMinarrivalTime(struct node* temp,int maxArrivalAime)
{
	int minarr=maxArrivalAime;
	while(temp!=NULL)
	{
		if (temp->arrival<minarr)
			minarr=temp->arrival;
		temp=temp->next;
	}
	return minarr;
}
struct node* ReadFile(FILE *f,int *maxarr,int *TotalBurstTime,int *process1)
{
	int process0=1;
	struct node *temp=NULL; 
		int process,Burst,arrival;

char arr[100];
char bu[100];
char c;
int j,k,i=1,count=1;
    if (f == NULL) {
        perror("Error opening file");
        exit(1);
    }
	   while (1) {
        int c = fgetc(f);

        if (c == EOF) {
            break;  
        }

        if (c == ':') {
            continue;
        }

        char bu[10000],arr[10000];
        int count = 0;

        while (c != ':' && c != EOF) {
            bu[count++] = c;
            c = fgetc(f);
        }
		c=fgetc(f);
        bu[count] = '\0'; 
        
        sscanf(bu, "%d", &Burst);
        *TotalBurstTime+=Burst;
        // Read the second number (arrival time)
        count = 0;
        while (c != ':' && c != EOF) {
            arr[count++] = c;
            c = fgetc(f);
        }
        arr[count] = '\0';
        sscanf(arr, "%d", &arrival);
        if(arrival>*maxarr)
        {
        	*maxarr=arrival;
		}
        while (c != '\n' && c != EOF) {
            c = fgetc(f);
        }
temp=insertBack(temp,process0,Burst,arrival);

        process++;
        process0 ++;
    }
    *process1=process0;
    fclose(f);
    return temp;
}
char inputFile[100],outputFile[100];
void Read(char IOpath[] );
void logo();
void logo1();
int FCFS(char*inputFile);
void sjf(char*inputFile);
void Priority();
int main(int argc ,char * argv[])
{
	
	
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
int choise;
printf("\n\n\n");
system("@cls||clear");
logo();
bool end =false;
char schedulingMethod [100]="none",Preemptivemethod [100]="non-Preemptive";             
while (end==false){                                                                                                                                                                                                                                                      
printf("\n1)Scheduling Method(%s)\n2)Preemptive Mode(%s)\n3)Show Result\n4)End Program\nOption>",schedulingMethod,Preemptivemethod);
scanf("%d",&choise);
int method=0,columns=0;
bool back=false;
int proc=0,count=1;
			char c;
int times [] ={0,1,1,2,3};

switch (choise)
{
	case 1:
	//system("@cls||clear"); //use to clear the terminal
	while(back!=true){
		printf("\nplese select one of the methods below :\n");
		printf("(1) First Come, First Served Scheduling\n(2) Shortest-Job-First Scheduling\n(3)Priority Scheduling\n(4)Round-Robin Scheduling\n(5)Back\nOption>>");
		scanf("%d",&method);
		switch (method)
		{
			case 1:
				
				strcpy(schedulingMethod,"\033[0;32mFirst Come, First Served Scheduling\033[0m");
				printf("\n>> you selcted method: %d,press back <<\n",method);
				break;
			case 2:
				
				strcpy(schedulingMethod,"\033[0;32mShortest-Job-First Scheduling\033[0m");
				printf("\n>> you selcted method: %d,press back <<\n",method);
				break;
			case 3:
				
				strcpy(schedulingMethod,"\033[0;32mPriority Scheduling\033[0m");
				printf("\n>> you selcted method: %d,press back <<\n",method);
				break;
			case 4:
				
				strcpy(schedulingMethod,"\033[0;32mRound-Robin Scheduling\033[0m");
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
		if (schedulingMethod=="none")
			printf("select method before");
 			else 
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
int FCFS(char*inputFile)
{
	
	int process,Burst,arrival,TotalBurstTime=0,maxarr=0,minarr;
	struct node *header=NULL;
	FILE *f;
	f=fopen(inputFile,"r"); 
	display(header);
	int process0=1,back=1;
    header=ReadFile(f,&maxarr,&TotalBurstTime,&process0);
    display(header);
    minarr=findMinarrivalTime(header,maxarr);
	display(header);
	int count0=countlinklist(header);
/////////////////////////////////////////////////////////////////////////

		/*sorted depend on arrival time*/
		
		printf("\n-----after sorted-----\n");
		header=ArrivalBubbleSort(header);
		display(header);

//////////////////////////////////////////////////////////////////////// 

									/*caculate the waiting time*/
int time=minarr;  
int waitTime=0,done;
struct node * temp=header;
float TotalaWaitTime=0;
for (int timer = minarr; timer <= maxarr; timer++) {
        for (int u = 1; u <= count0; u++) {
            if (temp->arrival == timer) {
            	waitTime=time-temp->arrival;
            	printf("\n waitTime = time %d - arrival %d = %d \n",time,temp->arrival,waitTime);
									//the first itreation
            	if(waitTime<0)
            	{
				waitTime=0;
				//time++;
				}
            	temp->wt=waitTime;
                	printf("\n<<process[%d] at time[%d] buratTime[%d] arrivalTime[%d] \twait[%d]\n",temp->process,timer,temp->Burst,temp->arrival,temp->wt);
                		time +=temp->Burst;
                TotalaWaitTime+=waitTime;
                printf("\n\tTime>>%d\t\n",time);
                done++;
            }
            temp = temp->next;
        }
        temp = header;
		}
//////////////////////////////////////////////////////////////////////
										/* show the result in order */
																		     	
system("@cls||clear");
printf("\t+------------------------------------------------------+\n");
printf("\t¦Scheduling Method: Shortest Job First – Non-Preemptive¦\n");
printf("\t+--------------------------------------------------------+\n");
printf("\nprocess\twatitngTime\n\n");
displayResult(header);
printf("Average Waiting Time:  :%f ms\n",TotalaWaitTime/count0);
while(back)
{
	printf("\n\n\nEnter 0 to Back to the menue >>>>");
scanf("%d",&back);
}
system("@cls||clear");
logo1();

	return 0;
	

//////////////////////////////////////////////////////////////////////
}



