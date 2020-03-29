/*
 * Declarations for Deme class to evolve a genetic algorithm for the
 * travelling-salesperson problem.  A deme is a population of individuals.
 */

#pragma once

#include "chromosome.hh"
#include "cities.hh"
#include "climb_chromosome.hh"
#include "deme.hh"

#include <random>

class TournamentDeme : public Deme {
 public:
    TournamentDeme(const Cities* cities_ptr, unsigned pop_size, double mut_rate) : Deme(cities_ptr, pop_size, mut_rate) {}

    ~TournamentDeme() = default;

    virtual void compute_next_generation();

    virtual Chromosome* select_parent();

}
