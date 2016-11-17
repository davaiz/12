#include <iostream>

using namespace std;

template <int L, int M, int T, int I, int Q, int N, int J >
class DimQ
{
    private:
        double x;
    public:
        DimQ(double _x)
        {
            x = _x;
        }
        DimQ<L, M, T, I, Q, N, J>  operator - () const {
            return DimQ<L, M, T, I, Q, N, J>(-x);
        }
        DimQ<L, M, T, I, Q, N, J> operator - (const DimQ<L, M, T, I, Q, N, J> &a) const {
            return DimQ<L, M, T, I, Q, N, J>(x - a.x);
        }    
        DimQ<L, M, T, I, Q, N, J> operator + (const DimQ<L, M, T, I, Q, N, J> &a) const {
            return DimQ<L, M, T, I, Q, N, J>(x+a.x);    
            
        }
}
typedef DimQ<1, 0, 0, 0, 0, 0, 0> Length;
typedef DimQ<0, 1, 0, 0, 0, 0, 0> Mass;
typedef DimQ<0, 0, 1, 0, 0, 0, 0> Time;
typedef DimQ<0, 0, 0, 1, 0, 0, 0> Electric_Current;
typedef DimQ<0, 0, 0, 0, 1, 0, 0> Thermodynamic_Temperature;
typedef DimQ<0, 0, 0, 0, 0, 1, 0> Amount_of_Substance;
typedef DimQ<0, 0, 0, 0, 0, 0, 1> Luminous_Intensity;
typedef DimQ<1, 0, -1, 0, 0, 0, 0> Velocity;
typedef DimQ<1, 0, -2, 0, 0, 0, 0> Acceleration;
typedef DimQ<0, 0, 0, 0, 0, 0, 0> Value;
