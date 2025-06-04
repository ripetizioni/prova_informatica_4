; Esempio di if: se AX < BX, allora moltiplicazione altrimenti divisione
MOV AH, 2      ; Valore AX
MOV AL, 5       
CMP AH, AL     ; Confronta AX con BX

JLE divisione   ;se ax>=bx vai a divisione
MUL AL          ; moltiplicazione se ax<bx AX=AX*BX
JMP fine_programma

divisione: 
DIV AL      

fine_programma              

;JGE invece di JLE: Uso `JGE` (Jump if Greater or Equal) per saltare alla divisione quando AX >= BX
;MUL BX: Istruzione per moltiplicare AX per BX. Il risultato va in AX (parte bassa) e DX (parte alta se c'è overflow)
;DIV BX: Istruzione per dividere AX per BX. Il quoziente va in AX, il resto in DX
;JMP fine_if: Salta l'istruzione di divisione dopo aver fatto la moltiplicazione