/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2021 PCOpt/NTUA
    Copyright (C) 2021 FOSS GP
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

inline const Foam::volScalarField&
Foam::incompressibleAdjointMeanFlowVars::paInst() const
{
    return paPtr_();
}


inline Foam::volScalarField& Foam::incompressibleAdjointMeanFlowVars::paInst()
{
    return paPtr_();
}


inline const Foam::volVectorField&
Foam::incompressibleAdjointMeanFlowVars::UaInst() const
{
    return UaPtr_();
}


inline Foam::volVectorField& Foam::incompressibleAdjointMeanFlowVars::UaInst()
{
    return UaPtr_();
}


inline const Foam::surfaceScalarField&
Foam::incompressibleAdjointMeanFlowVars::phiaInst() const
{
    return phiaPtr_();
}


inline Foam::surfaceScalarField&
Foam::incompressibleAdjointMeanFlowVars::phiaInst()
{
    return phiaPtr_();
}



// ************************************************************************* //
