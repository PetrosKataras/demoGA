/*
 *  Genotype.h
 *  demoGA
 *
 *  This is a demo Genteic Algorithm based on Alasdair Turner's Processing code http://www.openprocessing.org/visuals/?visualID=3101  
 *  slightly modified to work with OF. The algorithm attempts to maximise the square of the side lengths 
 *  while minimising the volume of the cuboids. 
 *  
 *  Its a good starting point for anyone interested to dive in to the world of Evolutionary Algorithms..
 *  Enjoy!!
 *
 */

#ifndef GENOTYPE_H 
#define GENOTYPE_H

#define NUM_GENES 3


class Genotype  {
	
public:
	
	Genotype();
	~Genotype();
	
	int m_genes [NUM_GENES];
	
	void mutate();
	Genotype crossover(Genotype a, Genotype b);	
};



#endif
