/// Вычисление суммарного сопротивления r1,r2,r3 соединенных параллельно
/// @author Мальцева К.В.

using namespace std;

/// считает суммарное сопротивление r1,r2,r3 параллельно соединенных

float sum_res (float r1, float r2, float r3)
{
	return 1/(1/r1+1/r2+1/r3);
}