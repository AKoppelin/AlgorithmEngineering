filename(n) = sprintf("TimeMeasurements_%sRepeated.dat", title_label(n))
title_label(n) = (n==1) ? "Insertionsort" : (n==2) ? "Quicksort" : (n==3) ? "Mergesort" : (n==4) ? "Heapsort" :  "NOT_IMPLEMENTED"

# number of implementations
n = 4
set title "Different sorting algorithms for input with repeated elements"
set key outside #Legende auﬂerhalb
set style fill transparent solid 0.3
set xlabel "n"
set ylabel "running time [us]"
set yrange [0:5000]
plot for [i = 1:n] filename(i) using 1:($2):($3) title '' with filledcurve lt i, \
						for[i = 1:n] filename(i) using 1:($4) title title_label(i) with lines lt i lw 2
pause -1