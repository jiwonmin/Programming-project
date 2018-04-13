CXX = g++
CC  = $(CXX)

CXXFLAGS = -std=c++11  # C++11

# CXXFLAGS += -pedantic -Wall         # pour les purs et durs
# CXXFLAGS += -g                      # pour debugger
# CXXFLAGS += -pg                   # pour profiler
# LDFLAGS  += -pg                   # pour profiler
# CXXFLAGS += -O2                   # pour optimiser la vitesse

all: testOscillateur

Vecteur.o: Vecteur.cc Vecteur.h
	$(CXX) $(CXXFLAGS) -c -o Vecteur.o Vecteur.cc

testVecteur.o: testVecteur.cc Vecteur.h
	$(CXX) $(CXXFLAGS) -c -o testVecteur.o testVecteur.cc

testVecteur: testVecteur.o Vecteur.o
	$(CXX) $(CXXFLAGS) -o -o testVecteur.o Vecteur.o

Oscillateur.o: Oscillateur.cc Oscillateur.h Vecteur.h
	$(CXX) $(CXXFLAGS) -c -o Oscillateur.o Oscillateur.cc
	
testOscillateur.o: testOscillateur.cc Oscillateur.h Vecteur.h
	$(CXX) $(CXXFLAGS) -c -o testOscillateur.o testOscillateur.cc

testOscillateur: testOscillateur.o Oscillateur.o
	$(CXX) $(CXXFLAGS) -o -o testOscillateur.o Oscillateur.o
	
