#include "variable_data_structures.hpp"

namespace V2 {

typedef struct {
  pos_t Pos[NDIM];
  mass_t Mass;
  pkey_t Key;
  myid_t ID;
  int_t Type;
  dynamic_t Vel[NDIM];
  dynamic_t GravAccel[NDIM];
  dynamic_t Potential;

} particle_base_t;

typedef struct {

  dynamic_t PM_GravityAccel[NDIM];
  dynamic_t PM_Potential;
} particle_mesh_t;

typedef struct {
  int_t TimeBin;
  integertime_t Ti_begstep;
  integertime_t Ti_current;
} particle_time_t;

// Implementations should go to a .cpp file...
class ParticleDataArray {
private:
  particle_base_t *Pbase;
  particle_mesh_t *Pmt;
  particle_time_t *Ptime;

public:
  ParticleDataArray(int N) { /* bunch of mallocs */
    Pbase = (particle_base_t *)malloc(sizeof(particle_base_t) * N);
    Pmt = (particle_mesh_t *)malloc(sizeof(particle_mesh_t) * N);
    Ptime = (particle_time_t *)malloc(sizeof(particle_time_t) * N);
  }

  // This
  inline pos_t Pos(size_t i, int dir) { return Pbase[i].Pos[dir]; }
  inline mass_t Mass(size_t i) { return Pbase[i].Mass; }
  inline pkey_t Key(size_t i) { return Pbase[i].Key; }
  inline myid_t ID(size_t i) { return Pbase[i].ID; }
  inline dynamic_t Vel(size_t i, int dir) { return Pbase[i].Vel[dir]; }
  inline dynamic_t GravAccel(size_t i, int dir) {
    return Pbase[i].GravAccel[dir];
  }
  inline dynamic_t Potential(size_t i) { return Pbase[i].Potential; }
  inline dynamic_t PM_GravityAccel(size_t i, int dir) {
    return Pmt[i].PM_GravityAccel[dir];
  }
  inline dynamic_t PM_Potential(size_t i) { return Pmt[i].PM_Potential; }
  inline int_t TimeBin(size_t i) { return Ptime[i].TimeBin; }
  inline int_t Ti_begstep(size_t i) { return Ptime[i].Ti_begstep; }
  inline int_t Ti_current(size_t i) { return Ptime[i].Ti_current; }

  ~ParticleDataArray() { /* bunch of frees */
    free(Pbase);
    free(Pmt);
    free(Ptime);
  }
};

}; // namespace V2
