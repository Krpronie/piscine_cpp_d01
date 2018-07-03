#include <iostream>
#include <fstream>
#include <string>
#include <ios>
using namespace std;

void my_cat(int ac,char **av)
{
    int n = 0;
    char rch; 
    if(ac>=2)
    {   
        while (av[++n] != NULL)
        {
            ifstream rfile(av[n],ios::in);
            if(!rfile)
            {
                cerr<<"my_cat: "<<av[n]<<": No such file or directory"<<endl;
            }
            while(rfile.get(rch))
            {
                cout.put(rch);
            }
            cout<<endl;
            rfile.close();
        }
    }
    else
        cout<< "my_cat: Usage : ./my_cat file [...]" << endl;
        exit(1);    
}