#ifndef AñO_H
#define AñO_H


class año
{
    public:
        año();
        virtual ~año();

        int get_año();
        void set_año(int año_);

    protected:

    private:
        int año_g;
        int verificated_año(int año );
};

#endif // AñO_H
