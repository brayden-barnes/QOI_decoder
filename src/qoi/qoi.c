#include "qoi/qoi.h"

#include "qoi/details/unused.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAGIC 800

void *qoi_decode(void const *data, uint64_t (size), qoi_desc_t *(out_desc)) {
  
  char *bytes = (char *)data; //convert binary data into chars we can read
  unsigned char c;
  char magic[MAGIC];
  qoi_desc_t *header;
  
  //read header
  fgets(magic, MAGIC, bytes);
  puts(magic);
  
  /*
  for(int i = 0; i < size; i++){
    c = bytes[i];
    printf("%c",c);
  }
  */

  return NULL; //return NULL
}



//pass a struct into header_check and if qoif 
//is read, set the rest of the values appropriately 
//and return the struct parameter