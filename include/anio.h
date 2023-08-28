#ifndef ANIO_H
#define ANIO_H


class anio
{
    public:
        anio();
        virtual ~anio();
     int get_anio();
        void set_anio(int anio_);

    protected:
     int verificated_anio(int anio );

    private:
        int anio_g;

};

#endif // ANIO_H
