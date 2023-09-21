,          ; Read the first digit into cell 0
-          ; Subtract 48 to convert ASCII to integer

,          ; Read the second digit into cell 1
-          ; Subtract 48 to convert ASCII to integer

+          ; Initialize cell 2 to store the sum
[          ; Start a loop to add the two digits

  -        ; Decrement cell 0 (the first digit)
  >+       ; Increment cell 1 (the second digit)
  
  [->+<]   ; Move the carry to cell 2 and reset cell 1

  <-       ; Move back to cell 0 (the first digit)

]          ; End of the addition loop

<.         ; Print the result (cell 2)
