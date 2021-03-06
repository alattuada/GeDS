% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/S3methods.R
\name{print.GeDS}
\alias{print.GeDS}
\title{Print method for GeDS objects}
\usage{
\method{print}{GeDS}(x, digits = max(3L, getOption("digits") - 3L), ...)
}
\arguments{
\item{x}{the \code{\link{GeDS-class}} object for which the main information should be printed on screen.}

\item{digits}{number of digits to be printed.}

\item{...}{potentially further arguments (required by the definition of the generic function).}
}
\value{
This function returns (invisibly) the same input object, but adding the slot \code{Print}
that contains the three sub-slots:
\item{Nknots}{ the number of internal knots of the linear GeDS fit}
\item{Deviances}{ the deviances of the three (linear, quadratic and cubic) GeDS fits}
\item{Call}{ the \code{call} to the function that produced the \code{x} object}
}
\description{
Method for the generic function \code{\link[base]{print}} that allows to
 print on screen the main information related to the fitted predictor model that can be extracted
  from a \code{\link{GeDS-class}} object.
}
\details{
This method allows to print on screen basic information related to the fitted predictor model such as the
function \code{call}, the number of internal knots for the linear GeDS fit and the deviances
for the three (linear, quadratic and cubic) fitted predictor models embedded in the \code{\link{GeDS-class}} object.
}
\seealso{
\code{\link[base]{print}} for the standard definition.
}

