#include <fstream>

using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int cmmdc(int a,int b)
{
    if(b==0)
        return a;
    else
    return cmmdc(b,a%b);
}
int main()
{
    int numarator,numitor,n,sus,jos;
    fin>>n;
    fin>>sus>>jos;
    for(int i=1;i<n;i++){
        fin>>numarator>>numitor;
        sus = numitor * sus + numarator * jos;
        jos = jos * numitor;
        int d = cmmdc(sus,jos);
        sus/=d;
        jos/=d;
    }
    fout<<sus<<' '<<jos;
}