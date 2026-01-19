C program implementation of the Caesar Cipher
caesar.c has encryption and decryption functions 
  Encryption function : f(p) = (p + k) mod (number depends on ASCII)
  Decryption function : f(p)^-1 = (p - k) mod (number depends on ASCII)
display.c was added to have a dedicated file for display which can be edited later 
makefile will generate .o binaries and Caesar executable to aid in further development
