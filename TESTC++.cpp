#include <iostream>

using namespace std;

class giophut {
    private:
        int gio, phut;
    public:
        giophut() {};
        giophut(int gio, int phut) {
            this -> gio  = gio;
            this -> phut = phut;
        }
        void xemmh() {
            cout << "Gio: " << this->gio << "\n" << "Phut: " << this->phut << "\n";
        }
        void rutgon() {
            int temp;
            if(this->phut >= 60) {
                temp = this->phut/60;
                this->phut=this->phut%60;
            }
            this->gio += temp;
            if(this->gio>=24)
                this->gio %= 24;
        }
        void phutSangGio() {
            int temp;
            if(this->phut >= 60)
                temp = this->phut/60;
        }
        void charToGioPhut(char *time) {
            if(time[0] != '0')
                this->gio = time[0]-'0' + 10 + time[1] - '0';
            else
                this->gio = time[1] - '0';
            this->phut = 10*(time[3]-'0') + time[4]-'0';
        }
        char* gioPhutToChar(giophut Time) {
            char *res = new char(6);
            if(Time.gio/10 == 2)
                res[0] = '2';
            else if(Time.gio/10 == 1)
                res[0] = '1';
            else
                res[0] = '0';
            res[1] = Time.gio%10+'0';
            res[2] = 'h';
            res[3] = Time.phut/10+'0';
            res[4] = Time.phut%10+'0';
            return res;
            delete res;
        }
        giophut operator +(giophut Time) {
            giophut t1;
            t1.gio = this->gio+Time.gio;
            t1.phut = this->phut+Time.phut;
            t1.rutgon();
            return t1;
        }
        giophut operator -(giophut Time) {
            giophut t1;
            t1.gio = this->gio+Time.gio;
            t1.phut = this->phut+Time.phut;
            t1.rutgon();
            return t1;
        }


};

int main() {
    giophut Time = giophut(3, 90);
    Time.rutgon();
    Time.charToGioPhut("07h30");
    cout << Time.gioPhutToChar(Time);
    //Time.xemmh();
    return 0;
}
