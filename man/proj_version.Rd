% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/version.R
\name{proj_version}
\alias{proj_version}
\title{PROJ version information}
\usage{
proj_version(runtime = TRUE)
}
\arguments{
\item{runtime}{Use FALSE to return the build-time
proj version, which may be different than the runtime
version if a different version of the
\link[libproj:libproj_version]{libproj package} was used to build
this package.}
}
\description{
PROJ version information
}
\examples{
proj_version()
proj_version(runtime = FALSE)

# check for a minimum version of proj
proj_version() >= "8.1.0"

}
