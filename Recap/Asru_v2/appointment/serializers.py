from rest_framework import serializers
from .models import Appointment
from patient.serializers import PatientSerializer
from doctor.serializers import DoctorSerializer


class AppointmentSerializer(serializers.ModelSerializer):
    # patient = PatientSerializer()
    # doctor = DoctorSerializer()
    patient = serializers.StringRelatedField(many=False)
    doctor = serializers.StringRelatedField(many=False)
    time = serializers.StringRelatedField(many=False)

    class Meta:
        model = Appointment
        fields = "__all__"
