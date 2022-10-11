/* $Id$
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'genome_collection.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <objects/genomecoll/GC_Query.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CGC_Query_Base::ResetParam(void)
{
    m_Param.erase();
    m_set_State[0] &= ~0x3;
}

void CGC_Query_Base::ResetValue(void)
{
    m_Value.erase();
    m_set_State[0] &= ~0xc;
}

void CGC_Query_Base::Reset(void)
{
    ResetParam();
    ResetValue();
}

BEGIN_NAMED_BASE_CLASS_INFO("GC-Query", CGC_Query)
{
    SET_CLASS_MODULE("NCBI-GenomeCollection");
    ADD_NAMED_STD_MEMBER("param", m_Param)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("value", m_Value)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
    info->CodeVersion(22100);
    info->DataSpec(ncbi::EDataSpec::eASN);
}
END_CLASS_INFO

// constructor
CGC_Query_Base::CGC_Query_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CGC_Query_Base::~CGC_Query_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

