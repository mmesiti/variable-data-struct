# What is what

Relevant things:
- variable_data_structures_v1.hpp: ParticleDataArray v1, with data split in sub-array of structures.
  Access is performed using getters (that should be inline).
- variable_data_structures_v2.hpp: ParticleDataArray v2, with data split in different sub-array of structures.
  Access is performed using getters (that should be inline).
- variable_data_structures.cpp: the main, with a generic function that can take any type
  (no C++20 concepts there yet). Note: no subclassing, virtual functions or sh*t like that, only compile-time polymorphism allowd here.
- variable_data_structures.hpp: boilerplate code common to V1 and V2 


