#include "variable_data_structures_v1.hpp"
#include "variable_data_structures_v2.hpp"
#include <iostream>

// Generic function, works for every structure
template <typename ParticleDataArrayType>
int test_routine(ParticleDataArrayType *P, int_t N) {

  double_t *x = (double_t *)malloc(sizeof(double_t) * N);

  std::cout << "Processing " << typeid(P).name() << std::endl;
  for (int_t j = 0; j < N; j++)
    x[j] = P->Pos(j, _X_);

  free(x);
  return 0;
}

int main(int argc, char **argv) {
  int N = (argc < 2 ? 100 : atoi(*(argv + 1)));

  {
    V1::ParticleDataArray P(N);
    test_routine(&P, N);
  }
  {
    V2::ParticleDataArray P(N);
    test_routine(&P, N);
  }

  return 0;
}
