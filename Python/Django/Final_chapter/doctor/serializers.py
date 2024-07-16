from rest_framework import serializers
from .models import Doctor, AvailableTime, Specialization, Designation


class DoctorSerializer(serializers.ModelSerializer):
    user = serializers.StringRelatedField(many=False)

    class Meta:
        model = Doctor
        fields = "__all__"


class AvailableTimeSerializer(serializers.ModelSerializer):
    user = serializers.StringRelatedField(many=False)

    class Meta:
        model = AvailableTime
        fields = "__all__"


class SpecializationSerializer(serializers.ModelSerializer):
    user = serializers.StringRelatedField(many=False)

    class Meta:
        model = Specialization
        fields = "__all__"


class DesignationSerializer(serializers.ModelSerializer):
    user = serializers.StringRelatedField(many=False)

    class Meta:
        model = Designation
        fields = "__all__"
