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

