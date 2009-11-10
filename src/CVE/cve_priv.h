/*! \file cve_priv.h
 *  \brief Common Vulnerability and Exposure dictionary
 * 
 *   See details at:
 *     http://cve.mitre.org/
 *     http://nvd.nist.gov/download.cfm
 *  
 */

/*
 * Copyright 2008 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Maros Barabas <mbarabas@redhat.com>
 */

#ifndef CVE_PRIV_H_
#define CVE_PRIV_H_

#include <libxml/xmlreader.h>
#include <libxml/xmlwriter.h>

#include "../common/list.h"
#include "../common/elements.h"

OSCAP_HIDDEN_START;

struct cve_model * cve_model_parse_xml(const struct oscap_import_source * source);

struct cve_model * cve_model_parse(xmlTextReaderPtr reader);

struct cve_entry * cve_entry_parse(xmlTextReaderPtr reader);

void cve_export(const struct cve_model * cve, xmlTextWriterPtr writer);

void cve_model_export_xml(struct cve_model * cve, const struct oscap_export_target * target);

OSCAP_HIDDEN_END;

#endif
