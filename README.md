# blast-custom-text-reuse

Custom version of BLAST for textreuse detection.

These are modifications to BLAST source code originally made by Aleksi Vesanto (https://github.com/avjves) for the purpose of text reuse detection. They have been ported over to a later version of BLAST, which was made necessary by later GCC compilers refusing to compile the original modified source.

## Installation

The sourcecode has to be compiled so it will run in which ever environment you are running locally / on a cluster:

```
cd ncbi-blast-2.13.0+-src_modified/c++  ## Now inside the BLAST source directory
./configure       ## Run configure file
make              ## Compile the program
```

Binary files are now in in `ncbi-blast-2.13.0+-src_modified/c++/ReleaseMT/bin`

The software expects BLAST binaries to be in PATH. This can be done by:

```
export PATH="/path/to/ncbi-blast-2.13.0+-src_modified/c++/ReleaseMT/bin:$PATH"
```

This should most likely be added to your .bashrc file, so it remains in different sessions as well.

## Modifications

Compared to standard BLAST, the following two modifications have been made:
* `/src/algo/blast/core/blast_stat.c` has a line (line 270 in 2.13.0 source) changed in BLOSUM62_VALUES_MAX to match the *gap_open* and *gap_extend* values needed for ECCO. The new line is as follows: `{3, 11, (double) INT2_MAX, 0.201, 0.012, 0.061, 3.3, -58, 0.740802, 140.417000, 141.882000},`
* The BLOSUM scoring matrix in `/src/util/tables/sm_blosum62.c` has been rewritten to be uniform.

The modified files can be found in `/modifications`

## Other versions

GPU BLAST might be one solution to the speed problems with BLAST and ECCO. There are a few implementations, but none have been updated in a while:

* Heterogeneous BLAST (H-BLAST): https://github.com/Yeyke/H-BLAST , https://academic.oup.com/bioinformatics/article/33/8/1130/2900493
  * Claims to be  1.5–4 times faster than GPU-BLAST. Combines GPU and CPU threads.
* GPU-Blast: https://sahinidis.coe.gatech.edu/gpublast
* cuBLASTP: https://github.com/vtsynergy/cuBLASTP , https://ieeexplore.ieee.org/document/6877260
  * Claims to be 2.8 times faster than GPU-BLASTP

Articles:
* https://www.ncbi.nlm.nih.gov/pmc/articles/PMC3018811/
* More recent one listing GPU implementations of BLAST: https://link.springer.com/article/10.1007/s11227-020-03267-1
* An Analysis of BLASTP Implementation on NVIDIA GPUs http://biochem218.stanford.edu/Projects%202012/Glasco.pdf