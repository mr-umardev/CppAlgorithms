#include <bits/stdc++.h>
using namespace std;
class Agency
{
public:
    virtual void domicile_papers() = 0;
    virtual void eduction_papers() = 0;
    virtual void legal_papers() = 0;
    Agency()
    {
        cout << "" << endl;
        void domicile_papers();
        void eduction_papers();
        void legal_papers();
    }
};
class Visa : public Agency
{
public:
    void domicile_papers()
    {
        cout << "Process domicile done" << endl;
    }
    void eduction_papers()
    {
        cout << "Process eduction done" << endl;
    }
    void legal_papers()
    {
        cout << "Legal process done" << endl;
    }
    void personal()
    {
        cout << "Personal process will start manually" << endl;
    }
    void medical()
    {
        cout << "Medical process will start manually" << endl;
    }
    void days()
    {
        cout << "Visa will be received in 3-5 days" << endl;
    }
};
int main()
{
    Agency *a1 = new Visa();
    a1->domicile_papers();
    a1->eduction_papers();
    a1->legal_papers();
    Visa v1;
    string str;
    cout << "Enter manual values through Yes or No" << endl;
    cin >> str;
    if (str == "Yes")
    {
        v1.personal();
        v1.medical();
        v1.days();
    }
    else
    {
        cout << "Process Pending" << endl;
    }
}