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
#include <objects/genomecoll/GC_External_Seqid.hpp>
#include <objects/seqloc/Seq_id.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CGC_External_Seqid_Base::ResetExternal(void)
{
    m_External.erase();
    m_set_State[0] &= ~0x3;
}

void CGC_External_Seqid_Base::ResetId(void)
{
    if ( !m_Id ) {
        m_Id.Reset(new TId());
        return;
    }
    (*m_Id).Reset();
}

void CGC_External_Seqid_Base::SetId(CGC_External_Seqid_Base::TId& value)
{
    m_Id.Reset(&value);
}

void CGC_External_Seqid_Base::Reset(void)
{
    ResetExternal();
    ResetId();
}

BEGIN_NAMED_BASE_CLASS_INFO("GC-External-Seqid", CGC_External_Seqid)
{
    SET_CLASS_MODULE("NCBI-GenomeCollection");
    ADD_NAMED_STD_MEMBER("external", m_External)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("id", m_Id, CSeq_id);
    info->RandomOrder();
    info->CodeVersion(22100);
    info->DataSpec(ncbi::EDataSpec::eASN);
}
END_CLASS_INFO

// constructor
CGC_External_Seqid_Base::CGC_External_Seqid_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetId();
    }
}

// destructor
CGC_External_Seqid_Base::~CGC_External_Seqid_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

