# This file was generated by Rcpp::compileAttributes
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

rate <- function(PredEdgeList, GSEdgeList, ngenes, sym) {
    .Call('netbenchmark_rate', PACKAGE = 'netbenchmark', PredEdgeList, GSEdgeList, ngenes, sym)
}

zsc <- function(x) {
    .Call('netbenchmark_zsc', PACKAGE = 'netbenchmark', x)
}

