#include <iostream>

using namespace std;
class giophut
{
    
private:
    int gio;
    int phut;
public:
    giophut(int gio,int phut){
        this->gio=gio;
        this->phut=phut;
    }
    void nhapbp(){
        cout<<"Nhap gio: ";
        cin>>gio;
        cout<<"\nNhap phut: "; cin>>phut;
    }
    void xemmh(){
        cout<<"Gio: "<<this->gio;
        cout<<"\nPhut: "<<this->phut; cout<<endl;
    }
    void rutgon(){
        int temp;
        if (phut>=60){
            temp=phut/60;
            this->phut=this->phut%60;
        }
        this->gio+=temp;
        if (this->gio>24){
                this->gio=gio%24;
        }
    }
    void phutsanggio(int n){
    	if (n<60)  {
    		this->gio=0;
    		this->phut=n;
		}
		else
		{
			this->gio=n/60;
			this->phut=n%60;
		}
		cout<<"Gio: "<<gio;
		cout<<"\nPhut: "<<phut; cout<<endl;
	}
    void chartoTime(char *time){
        int temp=(time[0]-'0')*10 +time[1]-'0';
        int temp2=(time[3]-'0')*10+time[4]-'0';
        this->gio=temp;
        this->phut=temp2; 
    }
    char* Timetochar(giophut Time){
    	char *ans= new char(5);
    	ans[0]=Time.gio/10+'0';
		ans[1]=Time.gio%10+'0';
		ans[2]='h';
		ans[3]=Time.phut/10+'0';
		ans[4]=Time.phut%10 +'0';
		
		delete ans;
		return ans;
	}
};

int main()
{
	giophut kien=giophut(25,120);
	kien.rutgon();
	kien.xemmh();
	kien.phutsanggio(600);
	char *s = "07h47";
	kien.chartoTime(s);
	kien.xemmh();
	cout<<kien.Timetochar(kien);
}

