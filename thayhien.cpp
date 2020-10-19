#include <iostream>
using namespace std;
class songuyen
{
    private:
        int n;
    public:
        songuyen(){
            n=0;
        }
        songuyen(int n){
            this->n=n;
        }
        void nhapbp(){
            cin>>n;
        }
        void xemmh(){
            cout<<n;
        }
        friend songuyen operator + (songuyen a,songuyen b);
};
songuyen operator + (songuyen a,songuyen b){
            songuyen c;
            c.n=a.n+b.n;
            return c;
        }
int main(){
    songuyen x,y(10),c;
    x.nhapbp();
    cout<<"\nx=";
    x.xemmh(); 

    cout<<"\ny= ";
    y.xemmh();
    c=x+y;
    cout<<"\nX+Y = " ;
    c.xemmh();
    return 0;
}