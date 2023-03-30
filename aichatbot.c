#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<windows.h>

char user_input[1000];
char search[];
char url[300]="start https://www.google.com/search?q=";
char speak[1000];
int main()
{
    printf("******this is lucifer your personal AI chat bot******\n ");
    system("espeak \"this is lucifer your personal AI chat bot\"");
    
    while(1)
    {
        printf("\nuser===>");
        gets(user_input);
        if(strcmp(user_input,"exit")==0)
        {
            system("espeak \"ok bye, boss! its my pleasure to serve you!\"");
            system("cls");
            printf("\nbot==>ok bye, boss! its my pleasure to serve you!");
            
            exit(0);
        }
        else if(strcmp(user_input,"hello")==0)
        {
            system("espeak \"hello boss, welcome back! how can i help you?\"");
            printf("\nbot==>hello boss, welcome back! how can i help you?");
            

            
        }
        else if(strcmp(user_input,"good morning")==0)
        {
        
            system("espeak \"hello boss, good morning! how can i help you\"");
            printf("\nbot==>hello boss, good morning! how can i help you?\n");

            
        }
        else if(strcmp(user_input,"good afternoon")==0)
        {
            system("espeak \"hello boss, good afternoon! how can i help you\"");
        
            printf("\nbot==>hello boss, good afternoon! how can i help you?");

            
        }
        else if(strcmp(user_input,"good night")==0)
        {
            system("espeak \"hello boss, good night! how can i help you\"");

            printf("\nbot==>hello boss, good night! how can i help you?");

            
        }
        else if(strcmp(user_input,"good evening")==0)
        {
            system("espeak \"hello boss, good evening! how can i help you\"");
            printf("\nbot==>hello boss, good evening! how can i help you?");

            
        }
        else if(strcmp(user_input,"hows the day")==0)
        {
        
            system("espeak \"good boss\"");
            printf("\nbot==>good boss,!........how can i help you?");

            
        }
        else if(strcmp(user_input,"hi")==0)
        {
        
            system("espeak \"hello boss, welcome back! how can i help you\"");
            printf("\nbot==>hello boss, welcome back! how can i help you?");

            
        }
        else if(strcmp(user_input,"holla")==0)
        {
            system("espeak \"hello boss, welcome back! how can i help you\"");
        
            printf("\nbot==>hello boss, welcome back! how can i help you?");

            
        }
        else if(strcmp(user_input,"wake up bot")==0)
        {
            system("espeak \"hello boss, welcome back  how can i help you\"");
        
            printf("\nbot==>hello boss, welcome back! how can i help you?");

            
        }
        else if(strcmp(user_input,"hey bot")==0)
        {
        
            system("espeak \"hello boss, welcome back! how can i help you\"");
            printf("\nbot==>hello boss, welcome back! how can i help you?");

            
        }
        else if(strcmp(user_input,"hey")==0)
        {
        
            system("espeak \"hello boss, welcome back! how can i help you\"");
            printf("\nbot==>hello boss, welcome back! how can i help you?");

            
        }
        else if(strcmp(user_input,"hola")==0)
        {
        
            system("espeak \"holla boss,    welcome back! how can i help you\"");
            printf("\nbot==>hello boss, welcome back! how can i help you?");

            
        }
        else if(strcmp(user_input,"open brave")==0)
        {
        
            system("espeak \"ok boss, opening brave browser\"");
            printf("\nok boss, opening brave browser!\n");
            system("start brave");

            
        }
        else if(strcmp(user_input,"open chrome")==0)
        {
            system("espeak \"ok boss, opening chrome browser\"");
        
            
            printf("\nbot==>ok boss, opening chrome browser!\n");
            system("start chrome");

            
        }                                
        else if(strcmp(user_input,"open notepad")==0)
        {
            system("espeak \"ok boss, opening notepad\"");
        
            printf("\nbot==>ok boss, opening notepad!\n");
            system("start notepad");

            
        }
        else if(strcmp(user_input,"open cmd")==0)
        {
        
            printf("\nbot==>ok boss, opening cmd terminal!\n");
            system("start cmd");

            
        }
        else if(strcmp(user_input,"open vscode")==0)
        {
        
            printf("\nbot==>ok boss, opening visual studio code!\n");
            system("code .");

            
        }
        else if(strcmp(user_input,"open dev c++")==0)
        {
        
            printf("\nbot==>ok boss, opening dev c++!\n");
            system("start devcpp.exe ");

            
        }
        else if(strcmp(user_input,"open files")==0)
        {
        
            printf("\nbot==>ok boss, opening file explorer!\n");
            system("start explorer.exe");

            
        }
        else if(strcmp(user_input,"open documents")==0)
        {
        
            printf("\nbot==>ok boss, opening documents!\n");
            system("start explorer.exe C:\\users\\thisi\\OneDrive\\Documents");

            
        }
        else if(strcmp(user_input,"open photos")==0)
        {
        
            printf("\nbot==>ok boss, opening photos folderl!\n");
            system("start explorer.exe C:\\Users\\thisi\\OneDrive\\Pictures");


            
        }
        else if(strcmp(user_input,"open downloads")==0)
        {
        
            printf("\nbot==>ok boss, opening downloads folder! \n");
            system("start explorer.exe C:\\Users\\thisi\\OneDrive\\Downloads");

            
        }
        else if(strcmp(user_input,"open settings")==0)
        {
        
            printf("\nbot==>ok boss, opening pc settings!\n");
            system("start ms-settings:");

            
        }
        else if(strcmp(user_input,"open zoom")==0)
        {
            system("start C:\\Users\\thisi\\AppData\\Roaming\\Zoom\\bin\\zoom.exe");

        }
        else if(strcmp(user_input,"shut down pc")==0)
        {
        
            printf("\nbot==>ok boss, shutting down pc!\n");
            system("shutdown /s /t 0");

            
        }
        else if(strcmp(user_input,"open ms store")==0)
        {
        
            printf("\nbot==>ok boss, opening microsoft store!\n");
            system("start ms-windows-store://home");

            
        }
        else if(strcmp(user_input,"open videos")==0)
        {
        
            printf("\nbot==>ok boss, opening videos folder!\n");
            system("start explorer.exe C:\\Users\\thisi\\Videos");

            
        }
        else if(strcmp(user_input,"open youtube")==0)
        {
        
            
            system("espeak \"ok boss, opening youtube.\"");
            printf("\nbot==>ok boss, opening youtube");
            system("start http://youtube.com");

            
        }
        else if(strcmp(user_input,"open twitter")==0)
        {
        
            printf("\nbot==>ok boss, opening twitter");
            system("start http://twitter.com");

            
        }
        else if(strcmp(user_input,"what is my name")==0)
        {
        
            printf("\nbot==>you are lex alias alexander william \nbot==>you're the hyperactive knucklehead, i have ever met!\n ");
            

            
        }
        else if(strcmp(user_input,"what are my favourite cars")==0)
        {
            printf("\nbot==>1)mustang gt 1965 2)corvette c1 1962  3)amg gt 2010  4)mclaren 765lt   5)mclaren senna  6)ferrari enzo   7)ferrari f40   8)dodge challenger.\n");
        }

        else if(strcmp(user_input,"search")==0)
        {
        
            printf("\nbot==>ok boss, enter what do i have  to search for?\n");
            gets(search);

            strcat(url,search);
            printf("\nbot==>ok boss, searching for %s \n",search);
            system(url);
            

            
        }
        else
        {
        
            

            strcat(url,user_input);
            printf("\nbot==>ok boss, searching for %s \n",user_input);
            system(url);
            

            
        }
        
        
        
    }
    return 0;
}
