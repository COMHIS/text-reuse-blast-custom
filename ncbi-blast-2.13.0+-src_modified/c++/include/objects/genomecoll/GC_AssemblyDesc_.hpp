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
 */

/// @file GC_AssemblyDesc_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'genome_collection.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GENOMECOLL_GC_ASSEMBLYDESC_BASE_HPP
#define OBJECTS_GENOMECOLL_GC_ASSEMBLYDESC_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CDate;
class CGC_DbTagAlias;
class CGC_Project;
class CSeq_annot;
class CSeq_descr;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_GENOME_COLLECTION_EXPORT CGC_AssemblyDesc_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGC_AssemblyDesc_Base(void);
    // destructor
    virtual ~CGC_AssemblyDesc_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// release type: RefSeq / GenBank.
    enum ERelease_type {
        eRelease_type_genbank = 1,
        eRelease_type_refseq  = 2
    };
    
    /// Access to ERelease_type's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ERelease_type)(void);
    
    /// release status (numeric values have gaps for possible additional states
    enum ERelease_status {
        eRelease_status_new        =   0,
        eRelease_status_gpipe      =   5,
        eRelease_status_public     =  10,
        eRelease_status_suppressed =  15,
        eRelease_status_hup        = 100,
        eRelease_status_withdrawn  = 105
    };
    
    /// Access to ERelease_status's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ERelease_status)(void);
    
    /// release level: Most of releases are major
    enum ERelease_level {
        eRelease_level_major =   0,
        eRelease_level_patch =   1,
        eRelease_level_minor =   2,
        eRelease_level_other = 255  ///< stopper
    };
    
    /// Access to ERelease_level's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ERelease_level)(void);
    
    // types
    typedef list< CRef< CGC_Project > > TProjects;
    typedef string TName;
    typedef string TSubmitter_name;
    typedef string TDisplay_name;
    typedef CStringUTF8 TLong_name;
    typedef string TFilesafe_name;
    typedef string TWgs_acc_prefix;
    typedef int TWgs_acc_number;
    typedef int TRelease_type;
    typedef int TRelease_status;
    typedef list< CRef< CSeq_annot > > TAnnot;
    typedef list< CRef< CGC_DbTagAlias > > TSynonyms;
    typedef CDate TSubmitter_date;
    typedef CSeq_descr TDescr;
    typedef bool TPartial;
    typedef double TCoverage;
    typedef int TRelease_level;
    typedef CStringUTF8 TSubmitter_organization;

    // member index
    enum class E_memberIndex {
        e__allMandatory = 0,
        e_projects,
        e_name,
        e_submitter_name,
        e_display_name,
        e_long_name,
        e_filesafe_name,
        e_wgs_acc_prefix,
        e_wgs_acc_number,
        e_release_type,
        e_release_status,
        e_annot,
        e_synonyms,
        e_submitter_date,
        e_descr,
        e_partial,
        e_coverage,
        e_release_level,
        e_submitter_organization
    };
    typedef Tparent::CMemberIndex<E_memberIndex, 19> TmemberIndex;

    // getters
    // setters

    /// project ID for this genome
    /// this is the ID for this asssembly and may reflect the submitter/source
    /// optional
    /// typedef list< CRef< CGC_Project > > TProjects
    ///  Check whether the Projects data member has been assigned a value.
    bool IsSetProjects(void) const;
    /// Check whether it is safe or not to call GetProjects method.
    bool CanGetProjects(void) const;
    void ResetProjects(void);
    const TProjects& GetProjects(void) const;
    TProjects& SetProjects(void);

    /// Names of the assembly
    /// optional
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    void SetName(TName&& value);
    TName& SetName(void);

    /// optional
    /// typedef string TSubmitter_name
    ///  Check whether the Submitter_name data member has been assigned a value.
    bool IsSetSubmitter_name(void) const;
    /// Check whether it is safe or not to call GetSubmitter_name method.
    bool CanGetSubmitter_name(void) const;
    void ResetSubmitter_name(void);
    const TSubmitter_name& GetSubmitter_name(void) const;
    void SetSubmitter_name(const TSubmitter_name& value);
    void SetSubmitter_name(TSubmitter_name&& value);
    TSubmitter_name& SetSubmitter_name(void);

    /// optional
    /// typedef string TDisplay_name
    ///  Check whether the Display_name data member has been assigned a value.
    bool IsSetDisplay_name(void) const;
    /// Check whether it is safe or not to call GetDisplay_name method.
    bool CanGetDisplay_name(void) const;
    void ResetDisplay_name(void);
    const TDisplay_name& GetDisplay_name(void) const;
    void SetDisplay_name(const TDisplay_name& value);
    void SetDisplay_name(TDisplay_name&& value);
    TDisplay_name& SetDisplay_name(void);

    /// optional
    /// typedef CStringUTF8 TLong_name
    ///  Check whether the Long_name data member has been assigned a value.
    bool IsSetLong_name(void) const;
    /// Check whether it is safe or not to call GetLong_name method.
    bool CanGetLong_name(void) const;
    void ResetLong_name(void);
    const TLong_name& GetLong_name(void) const;
    void SetLong_name(const TLong_name& value);
    void SetLong_name(TLong_name&& value);
    TLong_name& SetLong_name(void);

    /// optional
    /// typedef string TFilesafe_name
    ///  Check whether the Filesafe_name data member has been assigned a value.
    bool IsSetFilesafe_name(void) const;
    /// Check whether it is safe or not to call GetFilesafe_name method.
    bool CanGetFilesafe_name(void) const;
    void ResetFilesafe_name(void);
    const TFilesafe_name& GetFilesafe_name(void) const;
    void SetFilesafe_name(const TFilesafe_name& value);
    void SetFilesafe_name(TFilesafe_name&& value);
    TFilesafe_name& SetFilesafe_name(void);

    /// optional
    /// typedef string TWgs_acc_prefix
    ///  Check whether the Wgs_acc_prefix data member has been assigned a value.
    bool IsSetWgs_acc_prefix(void) const;
    /// Check whether it is safe or not to call GetWgs_acc_prefix method.
    bool CanGetWgs_acc_prefix(void) const;
    void ResetWgs_acc_prefix(void);
    const TWgs_acc_prefix& GetWgs_acc_prefix(void) const;
    void SetWgs_acc_prefix(const TWgs_acc_prefix& value);
    void SetWgs_acc_prefix(TWgs_acc_prefix&& value);
    TWgs_acc_prefix& SetWgs_acc_prefix(void);

    /// optional
    /// typedef int TWgs_acc_number
    ///  Check whether the Wgs_acc_number data member has been assigned a value.
    bool IsSetWgs_acc_number(void) const;
    /// Check whether it is safe or not to call GetWgs_acc_number method.
    bool CanGetWgs_acc_number(void) const;
    void ResetWgs_acc_number(void);
    TWgs_acc_number GetWgs_acc_number(void) const;
    void SetWgs_acc_number(TWgs_acc_number value);
    TWgs_acc_number& SetWgs_acc_number(void);

    /// optional
    /// typedef int TRelease_type
    ///  Check whether the Release_type data member has been assigned a value.
    bool IsSetRelease_type(void) const;
    /// Check whether it is safe or not to call GetRelease_type method.
    bool CanGetRelease_type(void) const;
    void ResetRelease_type(void);
    TRelease_type GetRelease_type(void) const;
    void SetRelease_type(TRelease_type value);
    TRelease_type& SetRelease_type(void);

    /// optional
    /// typedef int TRelease_status
    ///  Check whether the Release_status data member has been assigned a value.
    bool IsSetRelease_status(void) const;
    /// Check whether it is safe or not to call GetRelease_status method.
    bool CanGetRelease_status(void) const;
    void ResetRelease_status(void);
    TRelease_status GetRelease_status(void) const;
    void SetRelease_status(TRelease_status value);
    TRelease_status& SetRelease_status(void);

    /// in alt-loci units - contain alignment of this sequence to the primary
    /// unit
    /// optional
    /// typedef list< CRef< CSeq_annot > > TAnnot
    ///  Check whether the Annot data member has been assigned a value.
    bool IsSetAnnot(void) const;
    /// Check whether it is safe or not to call GetAnnot method.
    bool CanGetAnnot(void) const;
    void ResetAnnot(void);
    const TAnnot& GetAnnot(void) const;
    TAnnot& SetAnnot(void);

    /// Synonyms: Other releases of same assembly
    /// optional
    /// typedef list< CRef< CGC_DbTagAlias > > TSynonyms
    ///  Check whether the Synonyms data member has been assigned a value.
    bool IsSetSynonyms(void) const;
    /// Check whether it is safe or not to call GetSynonyms method.
    bool CanGetSynonyms(void) const;
    void ResetSynonyms(void);
    const TSynonyms& GetSynonyms(void) const;
    TSynonyms& SetSynonyms(void);

    /// Submitter release date
    /// optional
    /// typedef CDate TSubmitter_date
    ///  Check whether the Submitter_date data member has been assigned a value.
    bool IsSetSubmitter_date(void) const;
    /// Check whether it is safe or not to call GetSubmitter_date method.
    bool CanGetSubmitter_date(void) const;
    void ResetSubmitter_date(void);
    const TSubmitter_date& GetSubmitter_date(void) const;
    void SetSubmitter_date(TSubmitter_date& value);
    TSubmitter_date& SetSubmitter_date(void);

    /// Various attributes assigned at this level:
    /// biosrc, comments, publications...
    ///
    /// Special user-objects:
    /// Internal identifiers (GCOL-1178):  type  str ="gencoll-misc"
    ///              data : 2 user fields :
    ///              label  str "asm-name" str <contents of asm_name field>
    ///              label  str "asm-id" int <contents of asm_id field>
    /// ftp-sites:  type  str ="ftp-sites"
    ///              data : one or 2 fields, depending if both GB and RS have ftp-sites
    ///              label  str : "genbank" or "refseq" str : path to ftp-site
    /// diffs between GB / RS assemblies: type str "diff-from-synonym",
    ///         data label id <incrementing int> str <description of diff>
    /// optional
    /// typedef CSeq_descr TDescr
    ///  Check whether the Descr data member has been assigned a value.
    bool IsSetDescr(void) const;
    /// Check whether it is safe or not to call GetDescr method.
    bool CanGetDescr(void) const;
    void ResetDescr(void);
    const TDescr& GetDescr(void) const;
    void SetDescr(TDescr& value);
    TDescr& SetDescr(void);

    /// flag: is this assembly partial?
    /// **NOTE: not set = not known!!
    /// optional
    /// typedef bool TPartial
    ///  Check whether the Partial data member has been assigned a value.
    bool IsSetPartial(void) const;
    /// Check whether it is safe or not to call GetPartial method.
    bool CanGetPartial(void) const;
    void ResetPartial(void);
    TPartial GetPartial(void) const;
    void SetPartial(TPartial value);
    TPartial& SetPartial(void);

    /// level of coverage for this assembly
    /// **NOTE: not set = not known!!
    /// optional
    /// typedef double TCoverage
    ///  Check whether the Coverage data member has been assigned a value.
    bool IsSetCoverage(void) const;
    /// Check whether it is safe or not to call GetCoverage method.
    bool CanGetCoverage(void) const;
    void ResetCoverage(void);
    TCoverage GetCoverage(void) const;
    void SetCoverage(TCoverage value);
    TCoverage& SetCoverage(void);

    /// optional with default eRelease_level_major
    /// typedef int TRelease_level
    ///  Check whether the Release_level data member has been assigned a value.
    bool IsSetRelease_level(void) const;
    /// Check whether it is safe or not to call GetRelease_level method.
    bool CanGetRelease_level(void) const;
    void ResetRelease_level(void);
    void SetDefaultRelease_level(void);
    TRelease_level GetRelease_level(void) const;
    void SetRelease_level(TRelease_level value);
    TRelease_level& SetRelease_level(void);

    /// organization which submitted this assembly.
    /// populated from BioProject
    /// optional
    /// typedef CStringUTF8 TSubmitter_organization
    ///  Check whether the Submitter_organization data member has been assigned a value.
    bool IsSetSubmitter_organization(void) const;
    /// Check whether it is safe or not to call GetSubmitter_organization method.
    bool CanGetSubmitter_organization(void) const;
    void ResetSubmitter_organization(void);
    const TSubmitter_organization& GetSubmitter_organization(void) const;
    void SetSubmitter_organization(const TSubmitter_organization& value);
    void SetSubmitter_organization(TSubmitter_organization&& value);
    TSubmitter_organization& SetSubmitter_organization(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGC_AssemblyDesc_Base(const CGC_AssemblyDesc_Base&);
    CGC_AssemblyDesc_Base& operator=(const CGC_AssemblyDesc_Base&);

    // data
    Uint4 m_set_State[2];
    list< CRef< CGC_Project > > m_Projects;
    string m_Name;
    string m_Submitter_name;
    string m_Display_name;
    CStringUTF8 m_Long_name;
    string m_Filesafe_name;
    string m_Wgs_acc_prefix;
    int m_Wgs_acc_number;
    int m_Release_type;
    int m_Release_status;
    list< CRef< CSeq_annot > > m_Annot;
    list< CRef< CGC_DbTagAlias > > m_Synonyms;
    CRef< TSubmitter_date > m_Submitter_date;
    CRef< TDescr > m_Descr;
    bool m_Partial;
    double m_Coverage;
    int m_Release_level;
    CStringUTF8 m_Submitter_organization;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGC_AssemblyDesc_Base::IsSetProjects(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetProjects(void) const
{
    return true;
}

inline
const CGC_AssemblyDesc_Base::TProjects& CGC_AssemblyDesc_Base::GetProjects(void) const
{
    return m_Projects;
}

inline
CGC_AssemblyDesc_Base::TProjects& CGC_AssemblyDesc_Base::SetProjects(void)
{
    m_set_State[0] |= 0x1;
    return m_Projects;
}

inline
bool CGC_AssemblyDesc_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CGC_AssemblyDesc_Base::TName& CGC_AssemblyDesc_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(1);
    }
    return m_Name;
}

inline
void CGC_AssemblyDesc_Base::SetName(const CGC_AssemblyDesc_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0xc;
}

inline
void CGC_AssemblyDesc_Base::SetName(CGC_AssemblyDesc_Base::TName&& value)
{
    m_Name = std::forward<CGC_AssemblyDesc_Base::TName>(value);
    m_set_State[0] |= 0xc;
}

inline
CGC_AssemblyDesc_Base::TName& CGC_AssemblyDesc_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Name;
}

inline
bool CGC_AssemblyDesc_Base::IsSetSubmitter_name(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetSubmitter_name(void) const
{
    return IsSetSubmitter_name();
}

inline
const CGC_AssemblyDesc_Base::TSubmitter_name& CGC_AssemblyDesc_Base::GetSubmitter_name(void) const
{
    if (!CanGetSubmitter_name()) {
        ThrowUnassigned(2);
    }
    return m_Submitter_name;
}

inline
void CGC_AssemblyDesc_Base::SetSubmitter_name(const CGC_AssemblyDesc_Base::TSubmitter_name& value)
{
    m_Submitter_name = value;
    m_set_State[0] |= 0x30;
}

inline
void CGC_AssemblyDesc_Base::SetSubmitter_name(CGC_AssemblyDesc_Base::TSubmitter_name&& value)
{
    m_Submitter_name = std::forward<CGC_AssemblyDesc_Base::TSubmitter_name>(value);
    m_set_State[0] |= 0x30;
}

inline
CGC_AssemblyDesc_Base::TSubmitter_name& CGC_AssemblyDesc_Base::SetSubmitter_name(void)
{
#ifdef _DEBUG
    if (!IsSetSubmitter_name()) {
        m_Submitter_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Submitter_name;
}

inline
bool CGC_AssemblyDesc_Base::IsSetDisplay_name(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetDisplay_name(void) const
{
    return IsSetDisplay_name();
}

inline
const CGC_AssemblyDesc_Base::TDisplay_name& CGC_AssemblyDesc_Base::GetDisplay_name(void) const
{
    if (!CanGetDisplay_name()) {
        ThrowUnassigned(3);
    }
    return m_Display_name;
}

inline
void CGC_AssemblyDesc_Base::SetDisplay_name(const CGC_AssemblyDesc_Base::TDisplay_name& value)
{
    m_Display_name = value;
    m_set_State[0] |= 0xc0;
}

inline
void CGC_AssemblyDesc_Base::SetDisplay_name(CGC_AssemblyDesc_Base::TDisplay_name&& value)
{
    m_Display_name = std::forward<CGC_AssemblyDesc_Base::TDisplay_name>(value);
    m_set_State[0] |= 0xc0;
}

inline
CGC_AssemblyDesc_Base::TDisplay_name& CGC_AssemblyDesc_Base::SetDisplay_name(void)
{
#ifdef _DEBUG
    if (!IsSetDisplay_name()) {
        m_Display_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Display_name;
}

inline
bool CGC_AssemblyDesc_Base::IsSetLong_name(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetLong_name(void) const
{
    return IsSetLong_name();
}

inline
const CGC_AssemblyDesc_Base::TLong_name& CGC_AssemblyDesc_Base::GetLong_name(void) const
{
    if (!CanGetLong_name()) {
        ThrowUnassigned(4);
    }
    return m_Long_name;
}

inline
void CGC_AssemblyDesc_Base::SetLong_name(const CGC_AssemblyDesc_Base::TLong_name& value)
{
    m_Long_name = value;
    m_set_State[0] |= 0x300;
}

inline
void CGC_AssemblyDesc_Base::SetLong_name(CGC_AssemblyDesc_Base::TLong_name&& value)
{
    m_Long_name = std::forward<CGC_AssemblyDesc_Base::TLong_name>(value);
    m_set_State[0] |= 0x300;
}

inline
CGC_AssemblyDesc_Base::TLong_name& CGC_AssemblyDesc_Base::SetLong_name(void)
{
#ifdef _DEBUG
    if (!IsSetLong_name()) {
        m_Long_name = UnassignedStringUTF8();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Long_name;
}

inline
bool CGC_AssemblyDesc_Base::IsSetFilesafe_name(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetFilesafe_name(void) const
{
    return IsSetFilesafe_name();
}

inline
const CGC_AssemblyDesc_Base::TFilesafe_name& CGC_AssemblyDesc_Base::GetFilesafe_name(void) const
{
    if (!CanGetFilesafe_name()) {
        ThrowUnassigned(5);
    }
    return m_Filesafe_name;
}

inline
void CGC_AssemblyDesc_Base::SetFilesafe_name(const CGC_AssemblyDesc_Base::TFilesafe_name& value)
{
    m_Filesafe_name = value;
    m_set_State[0] |= 0xc00;
}

inline
void CGC_AssemblyDesc_Base::SetFilesafe_name(CGC_AssemblyDesc_Base::TFilesafe_name&& value)
{
    m_Filesafe_name = std::forward<CGC_AssemblyDesc_Base::TFilesafe_name>(value);
    m_set_State[0] |= 0xc00;
}

inline
CGC_AssemblyDesc_Base::TFilesafe_name& CGC_AssemblyDesc_Base::SetFilesafe_name(void)
{
#ifdef _DEBUG
    if (!IsSetFilesafe_name()) {
        m_Filesafe_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Filesafe_name;
}

inline
bool CGC_AssemblyDesc_Base::IsSetWgs_acc_prefix(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetWgs_acc_prefix(void) const
{
    return IsSetWgs_acc_prefix();
}

inline
const CGC_AssemblyDesc_Base::TWgs_acc_prefix& CGC_AssemblyDesc_Base::GetWgs_acc_prefix(void) const
{
    if (!CanGetWgs_acc_prefix()) {
        ThrowUnassigned(6);
    }
    return m_Wgs_acc_prefix;
}

inline
void CGC_AssemblyDesc_Base::SetWgs_acc_prefix(const CGC_AssemblyDesc_Base::TWgs_acc_prefix& value)
{
    m_Wgs_acc_prefix = value;
    m_set_State[0] |= 0x3000;
}

inline
void CGC_AssemblyDesc_Base::SetWgs_acc_prefix(CGC_AssemblyDesc_Base::TWgs_acc_prefix&& value)
{
    m_Wgs_acc_prefix = std::forward<CGC_AssemblyDesc_Base::TWgs_acc_prefix>(value);
    m_set_State[0] |= 0x3000;
}

inline
CGC_AssemblyDesc_Base::TWgs_acc_prefix& CGC_AssemblyDesc_Base::SetWgs_acc_prefix(void)
{
#ifdef _DEBUG
    if (!IsSetWgs_acc_prefix()) {
        m_Wgs_acc_prefix = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Wgs_acc_prefix;
}

inline
bool CGC_AssemblyDesc_Base::IsSetWgs_acc_number(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetWgs_acc_number(void) const
{
    return IsSetWgs_acc_number();
}

inline
void CGC_AssemblyDesc_Base::ResetWgs_acc_number(void)
{
    m_Wgs_acc_number = 0;
    m_set_State[0] &= ~0xc000;
}

inline
CGC_AssemblyDesc_Base::TWgs_acc_number CGC_AssemblyDesc_Base::GetWgs_acc_number(void) const
{
    if (!CanGetWgs_acc_number()) {
        ThrowUnassigned(7);
    }
    return m_Wgs_acc_number;
}

inline
void CGC_AssemblyDesc_Base::SetWgs_acc_number(CGC_AssemblyDesc_Base::TWgs_acc_number value)
{
    m_Wgs_acc_number = value;
    m_set_State[0] |= 0xc000;
}

inline
CGC_AssemblyDesc_Base::TWgs_acc_number& CGC_AssemblyDesc_Base::SetWgs_acc_number(void)
{
#ifdef _DEBUG
    if (!IsSetWgs_acc_number()) {
        memset(&m_Wgs_acc_number,UnassignedByte(),sizeof(m_Wgs_acc_number));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Wgs_acc_number;
}

inline
bool CGC_AssemblyDesc_Base::IsSetRelease_type(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetRelease_type(void) const
{
    return IsSetRelease_type();
}

inline
void CGC_AssemblyDesc_Base::ResetRelease_type(void)
{
    m_Release_type = (ERelease_type)(0);
    m_set_State[0] &= ~0x30000;
}

inline
CGC_AssemblyDesc_Base::TRelease_type CGC_AssemblyDesc_Base::GetRelease_type(void) const
{
    if (!CanGetRelease_type()) {
        ThrowUnassigned(8);
    }
    return m_Release_type;
}

inline
void CGC_AssemblyDesc_Base::SetRelease_type(CGC_AssemblyDesc_Base::TRelease_type value)
{
    m_Release_type = value;
    m_set_State[0] |= 0x30000;
}

inline
CGC_AssemblyDesc_Base::TRelease_type& CGC_AssemblyDesc_Base::SetRelease_type(void)
{
#ifdef _DEBUG
    if (!IsSetRelease_type()) {
        memset(&m_Release_type,UnassignedByte(),sizeof(m_Release_type));
    }
#endif
    m_set_State[0] |= 0x10000;
    return m_Release_type;
}

inline
bool CGC_AssemblyDesc_Base::IsSetRelease_status(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetRelease_status(void) const
{
    return IsSetRelease_status();
}

inline
void CGC_AssemblyDesc_Base::ResetRelease_status(void)
{
    m_Release_status = (ERelease_status)(0);
    m_set_State[0] &= ~0xc0000;
}

inline
CGC_AssemblyDesc_Base::TRelease_status CGC_AssemblyDesc_Base::GetRelease_status(void) const
{
    if (!CanGetRelease_status()) {
        ThrowUnassigned(9);
    }
    return m_Release_status;
}

inline
void CGC_AssemblyDesc_Base::SetRelease_status(CGC_AssemblyDesc_Base::TRelease_status value)
{
    m_Release_status = value;
    m_set_State[0] |= 0xc0000;
}

inline
CGC_AssemblyDesc_Base::TRelease_status& CGC_AssemblyDesc_Base::SetRelease_status(void)
{
#ifdef _DEBUG
    if (!IsSetRelease_status()) {
        memset(&m_Release_status,UnassignedByte(),sizeof(m_Release_status));
    }
#endif
    m_set_State[0] |= 0x40000;
    return m_Release_status;
}

inline
bool CGC_AssemblyDesc_Base::IsSetAnnot(void) const
{
    return ((m_set_State[0] & 0x300000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetAnnot(void) const
{
    return true;
}

inline
const CGC_AssemblyDesc_Base::TAnnot& CGC_AssemblyDesc_Base::GetAnnot(void) const
{
    return m_Annot;
}

inline
CGC_AssemblyDesc_Base::TAnnot& CGC_AssemblyDesc_Base::SetAnnot(void)
{
    m_set_State[0] |= 0x100000;
    return m_Annot;
}

inline
bool CGC_AssemblyDesc_Base::IsSetSynonyms(void) const
{
    return ((m_set_State[0] & 0xc00000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetSynonyms(void) const
{
    return true;
}

inline
const CGC_AssemblyDesc_Base::TSynonyms& CGC_AssemblyDesc_Base::GetSynonyms(void) const
{
    return m_Synonyms;
}

inline
CGC_AssemblyDesc_Base::TSynonyms& CGC_AssemblyDesc_Base::SetSynonyms(void)
{
    m_set_State[0] |= 0x400000;
    return m_Synonyms;
}

inline
bool CGC_AssemblyDesc_Base::IsSetSubmitter_date(void) const
{
    return m_Submitter_date.NotEmpty();
}

inline
bool CGC_AssemblyDesc_Base::CanGetSubmitter_date(void) const
{
    return IsSetSubmitter_date();
}

inline
const CGC_AssemblyDesc_Base::TSubmitter_date& CGC_AssemblyDesc_Base::GetSubmitter_date(void) const
{
    if (!CanGetSubmitter_date()) {
        ThrowUnassigned(12);
    }
    return (*m_Submitter_date);
}

inline
bool CGC_AssemblyDesc_Base::IsSetDescr(void) const
{
    return m_Descr.NotEmpty();
}

inline
bool CGC_AssemblyDesc_Base::CanGetDescr(void) const
{
    return IsSetDescr();
}

inline
const CGC_AssemblyDesc_Base::TDescr& CGC_AssemblyDesc_Base::GetDescr(void) const
{
    if (!CanGetDescr()) {
        ThrowUnassigned(13);
    }
    return (*m_Descr);
}

inline
bool CGC_AssemblyDesc_Base::IsSetPartial(void) const
{
    return ((m_set_State[0] & 0x30000000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetPartial(void) const
{
    return IsSetPartial();
}

inline
void CGC_AssemblyDesc_Base::ResetPartial(void)
{
    m_Partial = 0;
    m_set_State[0] &= ~0x30000000;
}

inline
CGC_AssemblyDesc_Base::TPartial CGC_AssemblyDesc_Base::GetPartial(void) const
{
    if (!CanGetPartial()) {
        ThrowUnassigned(14);
    }
    return m_Partial;
}

inline
void CGC_AssemblyDesc_Base::SetPartial(CGC_AssemblyDesc_Base::TPartial value)
{
    m_Partial = value;
    m_set_State[0] |= 0x30000000;
}

inline
CGC_AssemblyDesc_Base::TPartial& CGC_AssemblyDesc_Base::SetPartial(void)
{
#ifdef _DEBUG
    if (!IsSetPartial()) {
        memset(&m_Partial,UnassignedByte(),sizeof(m_Partial));
    }
#endif
    m_set_State[0] |= 0x10000000;
    return m_Partial;
}

inline
bool CGC_AssemblyDesc_Base::IsSetCoverage(void) const
{
    return ((m_set_State[0] & 0xc0000000) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetCoverage(void) const
{
    return IsSetCoverage();
}

inline
void CGC_AssemblyDesc_Base::ResetCoverage(void)
{
    m_Coverage = 0;
    m_set_State[0] &= ~0xc0000000;
}

inline
CGC_AssemblyDesc_Base::TCoverage CGC_AssemblyDesc_Base::GetCoverage(void) const
{
    if (!CanGetCoverage()) {
        ThrowUnassigned(15);
    }
    return m_Coverage;
}

inline
void CGC_AssemblyDesc_Base::SetCoverage(CGC_AssemblyDesc_Base::TCoverage value)
{
    m_Coverage = value;
    m_set_State[0] |= 0xc0000000;
}

inline
CGC_AssemblyDesc_Base::TCoverage& CGC_AssemblyDesc_Base::SetCoverage(void)
{
#ifdef _DEBUG
    if (!IsSetCoverage()) {
        memset(&m_Coverage,UnassignedByte(),sizeof(m_Coverage));
    }
#endif
    m_set_State[0] |= 0x40000000;
    return m_Coverage;
}

inline
bool CGC_AssemblyDesc_Base::IsSetRelease_level(void) const
{
    return ((m_set_State[1] & 0x3) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetRelease_level(void) const
{
    return true;
}

inline
void CGC_AssemblyDesc_Base::ResetRelease_level(void)
{
    m_Release_level = eRelease_level_major;
    m_set_State[1] &= ~0x3;
}

inline
void CGC_AssemblyDesc_Base::SetDefaultRelease_level(void)
{
    ResetRelease_level();
}

inline
CGC_AssemblyDesc_Base::TRelease_level CGC_AssemblyDesc_Base::GetRelease_level(void) const
{
    return m_Release_level;
}

inline
void CGC_AssemblyDesc_Base::SetRelease_level(CGC_AssemblyDesc_Base::TRelease_level value)
{
    m_Release_level = value;
    m_set_State[1] |= 0x3;
}

inline
CGC_AssemblyDesc_Base::TRelease_level& CGC_AssemblyDesc_Base::SetRelease_level(void)
{
#ifdef _DEBUG
    if (!IsSetRelease_level()) {
        memset(&m_Release_level,UnassignedByte(),sizeof(m_Release_level));
    }
#endif
    m_set_State[1] |= 0x1;
    return m_Release_level;
}

inline
bool CGC_AssemblyDesc_Base::IsSetSubmitter_organization(void) const
{
    return ((m_set_State[1] & 0xc) != 0);
}

inline
bool CGC_AssemblyDesc_Base::CanGetSubmitter_organization(void) const
{
    return IsSetSubmitter_organization();
}

inline
const CGC_AssemblyDesc_Base::TSubmitter_organization& CGC_AssemblyDesc_Base::GetSubmitter_organization(void) const
{
    if (!CanGetSubmitter_organization()) {
        ThrowUnassigned(17);
    }
    return m_Submitter_organization;
}

inline
void CGC_AssemblyDesc_Base::SetSubmitter_organization(const CGC_AssemblyDesc_Base::TSubmitter_organization& value)
{
    m_Submitter_organization = value;
    m_set_State[1] |= 0xc;
}

inline
void CGC_AssemblyDesc_Base::SetSubmitter_organization(CGC_AssemblyDesc_Base::TSubmitter_organization&& value)
{
    m_Submitter_organization = std::forward<CGC_AssemblyDesc_Base::TSubmitter_organization>(value);
    m_set_State[1] |= 0xc;
}

inline
CGC_AssemblyDesc_Base::TSubmitter_organization& CGC_AssemblyDesc_Base::SetSubmitter_organization(void)
{
#ifdef _DEBUG
    if (!IsSetSubmitter_organization()) {
        m_Submitter_organization = UnassignedStringUTF8();
    }
#endif
    m_set_State[1] |= 0x4;
    return m_Submitter_organization;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENOMECOLL_GC_ASSEMBLYDESC_BASE_HPP