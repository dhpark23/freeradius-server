/**
 *@memo 	Implementation of the modified counter mode
 *@doc  	 
 *@author 	A. MAGNIEZ (FT R&D - DTL/SSR) 
 */

#ifndef _SOBMMO_H_
#define _SOBMMO_H_

#include "BlockCipher.h"


class SOBMMO {
 public:
  
  SOBMMO();
  
  int initialize(const byte* K, BlockCipher* E,const byte* inputBlock,int nb,const byte* counterValues);
  
  byte* getOutputBlock(int id);
  
  virtual ~SOBMMO();
  
private:
  int sizeBlock; //the size of a block cipher (input and output) in bytes
  int nbOutputBlocks; //number of required output blocks
  byte* outputBlocks; //pointer to output blocks
};

#endif
