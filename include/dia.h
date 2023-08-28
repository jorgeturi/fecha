#ifndef DIA_H
#define DIA_H


class dia
{
    public:
        dia();
        virtual ~dia();

        unsigned int get_dia();
        void set_dia(unsigned int d);
    protected:
        int verificated_dia(unsigned int d);

    private:
        unsigned int dia_g;

};

#endif // DIA_H
