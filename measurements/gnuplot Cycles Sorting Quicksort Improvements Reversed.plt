# Script to compare a single sorting algorithm for different types of input
filename(n) = sprintf("CycleMeasurements_%s.dat", title_label(n))
title_label(n) = (n==1) ? "QuicksortReversed" : (n==2) ? "Quicksort1Reversed" : (n==3) ? "Quicksort2Reversed" : (n==4) ? "Quicksort3Reversed" : (n==5) ? "StdSortReversed" : "NOT_IMPLEMENTED"

# number of implementations
n = 5
set title "Different quicksort improvements and std::sort for reversed input."
set key outside #Legende au�erhalb
set style fill transparent solid 0.3
set xlabel "n"
set ylabel "running time [cycles]"
#set yrange [0:8500000000]
plot for [i = 1:n] filename(i) using 1:($2):($3) title '' with filledcurve lt i, \
						for[i = 1:n] filename(i) using 1:($4) title title_label(i) with lines lt i lw 2
pause -1
