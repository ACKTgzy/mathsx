#include <iostream>
#include <cmath>

namespace MATHSX{
    class one_X{
    private:
        struct X{
            char mood;
            int X_a;
            int X_m;
            struct X *X_next;
        };
        struct M{
            char mood;
            int M;
            int M_m;
            struct M *M_next;
        };
        struct str_date{
            std::string str;
            struct str_date *next;
        };
        X *lx;
        X *rx;
        M *lm;
        M *rm; 
        str_date *str_p = nullptr;
        void mathsLx(void);
        void mathsRx(void);
        void mathsLs(void);
        void mathsRs(void);
        void mathsX(void);
        void mathsM(void);
        str_date* where_end_p(void){
            std::cerr << "b";
            if(one_X::str_p == nullptr){
                std::cerr << "x";
                return one_X::str_p;
            }
            else{
                one_X::str_date *end_p = one_X::str_p;
                while (true)
                {
                    end_p = end_p ->next;
                    if(end_p == nullptr){
                        std::cerr << "z";
                        return end_p;
                   }
                }
            }
            exit(-1);
        }
    public:
        void readX(std::string);
        double maths(void);
        void print_str_date(void){
            while(true){
                str_date *p = str_p;
                std::cout << p->str << std::endl; 
                if( p ->next != nullptr)p = p ->next;
            }
        }
    };

    void one_X::mathsLx(void){

    }

    void one_X::readX(std::string input){
        {
            std::string X_date;
            for( char a : input ){
                if( a == ' ' )continue;
                X_date += a;
            }

            std::string Date; 

            while (true)
            {
                Date = "";
                while(true){
                    int i = 0;
                    char a = X_date[i];
                    if( a == '/' || a == '*' || a == '+' || a == '+' ){
                        Date += a;
                        i++;
                        while (true)
                        {
                            Date += X_date[i];
                            i++;
                            if( X_date[i] == '/' ||  X_date[i] == '*' ||  X_date[i] == '+' ||  X_date[i] == '+' ){
                                break;
                            }
                        }
                        std::cerr << "a";
                        str_date* endp = std::move(where_end_p());
                        std::cerr <<"d";
                        endp = new str_date;
                        std::cerr << "c";
                        endp ->str = Date;
                    }
                    else if( a == '(' || a == ')' ){
                        str_date* endp = std::move(where_end_p());
                        endp = new str_date;
                        endp ->str = a;
                        i++;
                    }
                    else{
                        std::cerr << "haven't" << a << std::endl;
                        exit(-1);
                    }
                }
            }
        }
    } 
}

