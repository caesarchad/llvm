//===- PDBSymbolTypeBaseClass.cpp - -----------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "llvm/DebugInfo/PDB/PDBSymbol.h"
#include "llvm/DebugInfo/PDB/PDBSymbolTypeBaseClass.h"
#include <utility>

using namespace llvm;

PDBSymbolTypeBaseClass::PDBSymbolTypeBaseClass(
    const IPDBSession &PDBSession, std::unique_ptr<IPDBRawSymbol> Symbol)
    : PDBSymbol(PDBSession, std::move(Symbol)) {}

void PDBSymbolTypeBaseClass::dump(raw_ostream &OS, int Indent,
                                  PDB_DumpLevel Level) const {
  OS << stream_indent(Indent);
  OS << "<base class> " << getName();
}
