# 🏥 MediVault

> **A secure, patient-owned digital medical record system for seamless healthcare continuity.**

MediVault is a web application that allows patients to securely store and manage their medical history in one place while enabling authorized doctors to instantly access critical health information during emergencies using a unique Emergency ID.

Built as a hackathon project to address fragmented medical records, repeated diagnostic tests, and poor continuity of care.

## [Visit Our Website](YOUR_VIDEO_LINK)

## Project Demo --- [Watch the MediVault demo](YOUR_VIDEO_LINK)


## 🚀 Problem Statement

Patients often receive treatment from multiple hospitals, clinics, laboratories, and pharmacies. Their medical history becomes scattered across:

- Paper prescriptions
- PDF reports
- Medical scans
- WhatsApp images
- Hospital portals

When changing doctors or in an emergency, clinicians rarely have access to previous records, leading to:

- Repeated diagnostic tests
- Incorrect medications
- Drug interactions
- Delayed treatment
- Poor continuity of care

MediVault solves this by creating a secure, centralized medical record owned by the patient.

---

# ✨ Features

## 👤 Patient Portal

### Secure Authentication

- Patient Registration
- Patient Login
- Secure Supabase Authentication
- Session Persistence
- Logout

---

### Personal Medical Profile

Patients can store:

- Full Name
- Email
- Phone Number
- Date of Birth
- Gender
- Blood Group
- Permanent Address
- Current Address
- Allergies
- Chronic Diseases
- Current Medications
- Emergency Contact
- Unique Emergency ID

---

### Emergency ID

Every patient receives a unique Emergency ID.

Example:

```
MV-AB12CD
```

This ID can be shared with healthcare providers during emergencies to instantly retrieve medical records.

---

### Medical Report Upload

Patients can upload:

- Prescriptions
- Blood Test Reports
- MRI
- CT Scan
- ECG
- X-Ray
- Medical Scans
- Other Medical Documents

Supported formats:

- PDF
- JPG
- JPEG
- PNG

Each report stores:

- Report Title
- Report Type
- Hospital / Clinic
- Doctor Name
- Report Date
- Clinical Notes
- Uploaded File

---

### Dashboard

Patient dashboard displays:

- Welcome message
- Blood Group
- Allergies
- Chronic Diseases
- Current Medications
- Emergency ID
- Recent Reports
- Upload Report
- View Reports

---

# 👨‍⚕️ Doctor Portal

## Secure Doctor Login

Unlike patients, doctors **cannot self-register**.

Doctor accounts are:

- Pre-approved
- Created by the administrator
- Verified against the Doctors table

Unauthorized users are denied access.

---

## Emergency Search

Doctors can search using the patient's Emergency ID.

Example:

```
MV-AB12CD
```

---

## Patient Overview

After successful search doctors can view:

- Patient Name
- Blood Group
- Allergies
- Chronic Diseases
- Current Medications
- Emergency Contact
- Emergency Phone Number

---

## Medical Reports

Doctors can access all uploaded reports including:

- Report Title
- Report Type
- Hospital
- Doctor
- Report Date
- Clinical Notes

Reports can be opened directly from the dashboard.

---

# 🔒 Security

- Supabase Authentication
- Role Separation
- Patient Authentication
- Doctor Authentication
- Protected Routes
- Row Level Security (RLS)
- Secure Database Access
- Session Management

Patients can only access their own data.

Doctors must authenticate before accessing patient records.

---

# 🛠 Tech Stack

## Frontend

- React
- Vite
- JavaScript
- Tailwind CSS
- React Router
- Lucide React

---

## Backend

- Supabase

Services used:

- Authentication
- PostgreSQL Database
- Storage Buckets
- Row Level Security

---

## Database

PostgreSQL (Supabase)

Tables:

- patients
- doctors
- reports

Storage Bucket:

```
medical-reports
```

---

# 📂 Project Structure

```
src/

├── components/
│   ├── dashboard/
│   ├── auth/
│   └── ui/
│
├── pages/
│   ├── Landing
│   ├── Patient
│   ├── Doctor
│   └── Authentication
│
├── lib/
│   └── supabase.js
│
├── App.jsx
└── main.jsx
```

---

# 🗄 Database Architecture

## Patients

Stores:

- Personal Information
- Medical Information
- Emergency Contact
- Emergency ID

---

## Doctors

Stores:

- Doctor Name
- Email
- Hospital
- License Number
- Specialization

---

## Reports

Stores:

- Patient ID
- Report Title
- Report Type
- Hospital
- Doctor
- Report Date
- Notes
- File URL

---

# 🔄 Workflow

## Patient

```
Register -> Login -> Create Medical Profile -> Upload Reports -> Generate Emergency ID -> Maintain Lifetime Medical History
```

---

## Doctor

```
Login -> Search Emergency ID -> Retrieve Patient Information -> View Medical Reports -> Provide Better Clinical Decisions
```

---

# 🔐 Authentication Flow

## Patient

```
Register -> Supabase Auth -> Patient Profile -> Dashboard
```

---

## Doctor

```
Pre-created Account -> Supabase Login -> Verify in Doctors Table -> Doctor Dashboard
```


---

# 🌟 Future Improvements

- QR Code based Emergency Access
- Temporary Doctor Access Tokens
- Audit Logs
- OCR for Medical Reports
- AI Medical Report Summaries
- Medication Reminder System
- Multi-language Support
- Hospital Integration (ABDM/FHIR)
- Mobile Application
- End-to-End Encryption

---

# 🚀 Local Setup

Clone the repository

```bash
git clone https://github.com/<your-username>/medivault.git
```

Go to the project directory

```bash
cd medivault
```

Install dependencies

```bash
npm install
```

Create a `.env` file

```env
VITE_SUPABASE_URL=YOUR_SUPABASE_URL
VITE_SUPABASE_ANON_KEY=YOUR_SUPABASE_ANON_KEY
```

Run the development server

```bash
npm run dev
```

Build for production

```bash
npm run build
```

---

# 👨‍💻 Authors

**Kuladeep Kottapalli**, 
**Mohit Raghavendra**

Hackathon Project

---

# 📄 License

This project is created for educational and hackathon purposes.

---

## ❤️ Built to ensure that no patient's medical history is ever lost again.
