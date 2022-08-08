#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class A
{
private:
    int A;
    char CH[30];
protected:
    void setdata(int a)
    {
        A=a;
    }
    void setname(char* ch)
    {
        strcpy(CH,ch);
    }
public:
    int getdata()
    {
       return (A);
    }
    char* getname()
    {
        return(CH);
    }
};
class B:protected A
{
private:
    float Ag;
protected:
    void setAg(float aG)
    {
        Ag=aG;
    }
public:
    float getAg()
    {
        return(Ag);
    }
    void setData(int a,char* ch,float aG)
    {
        setdata(a);
        setname(ch);
        setAg(aG);
    }
    void showData()
    {
        cout<<getname()<<"  "<<getdata()<<" "<<getAg();
    }
};
int main()
{
    B b1;
    b1.setData(10,"ChamchamG",102.2);
    b1.showData();
    getch();
}
