#ifndef MES_H
#define MES_H


class mes
{
    public:
        mes(int = 0);
        virtual ~mes();

        int get_mes();
        void set_mes(int mes_);

    protected:
        int verificated_mes(int mes );

    private:
        int mes_g;
};

#endif // MES_H
