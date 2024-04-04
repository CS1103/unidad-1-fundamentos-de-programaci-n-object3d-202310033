//
// Created by rudri on 4/3/2024.
//

#include <catch2/catch_test_macros.hpp>
#include <cmath>
#include <memory>
#include "Sphere.h"

TEST_CASE( "Create Sphere Zero", "[create]" ) {
  auto sphere = std::make_unique<Sphere>();
  
  REQUIRE( sphere->surface() == 0 );
  REQUIRE( sphere->volume() == 0 );
}

TEST_CASE( "Create Sphere with Radio", "[create]" ) {
  auto sphere = std::make_unique<Sphere>(10);
  
  REQUIRE( std::trunc(sphere->surface()*1000) == 1256637 );
  REQUIRE( std::trunc(sphere->volume()*1000) == 4188790 );
}

TEST_CASE( "Print Sphere", "[show]" ) {
  auto sphere = std::make_unique<Sphere>(10);
  
  std::stringstream ss;
  ss << *sphere;
  REQUIRE( ss.str() == "sphere: 4188.79 1256.64" );
}
