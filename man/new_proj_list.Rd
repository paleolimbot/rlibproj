% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/proj-list.R
\name{new_proj_list}
\alias{new_proj_list}
\title{Lists of projections}
\usage{
new_proj_list(x = list())
}
\arguments{
\item{x}{A \code{\link[=list]{list()}} of \link[=proj_create]{PROJ objects}.}
}
\value{
An object of class "rproj_proj_list".
}
\description{
This class is probably unnecessary for users of rproj
but is used internally so that lists of PROJ objects
can be put into data frames (e.g., for the return value
of \code{\link[=proj_identify]{proj_identify()}}).
}
\examples{
new_proj_list(list(proj_create("OGC:CRS84")))

}
